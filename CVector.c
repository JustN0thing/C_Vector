#include "CVector.h"


void CVector_Init(CVector* v)
{
    v->id = 0;
    v->data = NULL;
    v->size = 0;
    v->last = 0;
}

void CVector_Add(CVector* v, void *_data, int _index)
{      
        
        if(v->size == 0)
        {                   
            
            v->size = 10;            
            v->data = malloc(sizeof(void*)*v->size);
            v->data = memset(v->data,'\0',sizeof(void*)*v->size);                

        }       
       
        if(_index >= v->size)
        {
           v->size = _index;  
           v->last = _index;       
           v->data = realloc(v->data,sizeof(void*)*v->size);           
        }

       

        
          v->data[_index] = _data;         
          v->id++;
         
          
           
       
}

void* CVector_Front(CVector* v)
{
    if(v->size > 0)
    return v->data[0];

    return 0;
}

void* CVector_Back(CVector* v)
{
    if(v->size > 0)
    {
          
        return v->data[v->last-1];
    }else return 0;
}


void CVector_PushBack(CVector* v, void* _data)
{
        if(v->size == 0)
        {
            v->size = 10;
            v->data = malloc(sizeof(void*)*v->size);            
        }
       

        if(v->id == v->size)
        {
            v->size *= 2;
            v->data = realloc(v->data,sizeof(void*)*v->size);
        }
        
        v->data[v->id] = _data;
        v->id++;
        
        
           

        
}


int CVector_IsEmpty(CVector* v, int _index)
{
    if(v->data[_index] == '\0')
    return 1;

    return 0;    
}

void Show(CVector* v)
{
    for(int i = 0; i < v->id;i++)
    {
        if(v->data[i]!= NULL)
        {
            printf("Vector[%d]:=%d \n",i,v->data[i]);
        }
    }
}