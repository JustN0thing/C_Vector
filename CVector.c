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
            
            v->size = 10;            
            v->data = malloc(sizeof(void*)*v->size);
            v->data = memset(v->data,'\0',sizeof(void*)*v->size);                

        }       
       
        if(_index >= v->size)
        {
           v->size = _index;
           v->data = realloc(v->data,sizeof(void*)*v->size);           
        }
     
          v->data[_index] = _data;         
          v->id++;
      
       
}

void* CVector_Front(CVector* v)
{
    return v->data[0];
}

void* CVector_Back(CVector* v)
{
    if(v->size > 0)
    {
        int last = ArraySize(v->data);
        return v->data[last];
    }else return 0;
}


void CVector_PushBack(CVector* v, void* _data)
{

}


void CVector_IsEmpty(CVector* v, int _index)
{
    int count = 0;

    for(int i = 0; i < v->size;i++)
    {
        if(v->data[i] != 0)
        printf("Vect[%d]:=%d\n",i, v->data[i]);
    }

    
}