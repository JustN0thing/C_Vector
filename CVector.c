#include "CVector.h"


void CVector_Init(CVector* v)
{
    v->id = 0;
    v->data = NULL;
    v->size = 0;
   
}

void CVector_Add(CVector* v, void *_data, int _index)
{                     
        if(v->size == 0)
        {
            v->size = 20;
            v->data = malloc(sizeof(void*)*v->size);
            v->data = memset(v->data,'\0',sizeof(void*)*v->size);
        }
        
        if(_index >= v->size)        
        {
            v->size *=2;
            v->data = realloc(v->data,sizeof(void*)*v->size);  
              
        }

          v->data[_index] = _data;         
          v->id++;
         
          
           
       
}

void* CVector_Front(CVector* v)
{
    return v->data[0];  
}

//Works bad :(
void* CVector_Back(CVector* v)
{
    int last = 0;

    if(v->size > 0)
    {
     for(int i = 0; i < v->size;i++)
        {
            if(v->data[i] != Empty)
            {
                last=i;
            }
        }

        return v->data[last];
    }else return 0;
}


void CVector_PushBack(CVector* v, void* _data)
{
        if(v->size == 0)
        {
            v->size = 10;
            v->data = malloc(sizeof(void*)*v->size);    
            v->data = memset(v->data,'\0',sizeof(void*)*v->size);        
        }
       

        if(v->id == v->size)
        {
            v->size *= 2;
            v->data = realloc(v->data,sizeof(void*)*v->size);
        }
        
        v->data[v->id] = _data;
        v->id++;
        
}


void CVector_PopBack(CVector* v)
{
    int last = 0;

    if(v->id >= 0)
    {
     for(int i = 0; i < v->size;i++)
        {
            if(v->data[i] != Empty)
            {
                last=i;
            }
        }

       
    }

    if(!CVector_IsEmpty(v,last))
    {
            v->data[last] = NULL;
            v->size--;
            v->id --;

            v->data = realloc(v->data,sizeof(void*)*v->size);
    }
}


void* CVector_Get(CVector* v, int _index)
{
    return v->data[_index];
}

int CVector_IsEmpty(CVector* v, int _index)
{
    if(v->data[_index] == Empty)
    return 1;

    return 0;    
}

void Show(CVector* v)
{
    for(int i = 0; i < v->size;i++)
    {
        if(v->data[i] != Empty)
        {
            printf("Vector[%d]:=%d \n",i,v->data[i]);
        }
    }
}