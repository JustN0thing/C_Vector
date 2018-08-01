//Author Artem Yagnuk 2018
#include "CVector.h"


void CVector_Init(CVector* v)
{
    v->id = 0;
    v->data = NULL;
    v->size = 0;
   
}

void CVector_Add(CVector* v, void *_data, int _index)
{                     
        if(v->size == 0) //Checking the size variable of our struct
        {
            v->size = 10;   //if size been 0 then we increase this variable to 10
            v->data = malloc(sizeof(void*)*v->size); // allocate a new size of memory for our data
            v->data = memset(v->data,'\0',sizeof(void*)*v->size); // set all elements to zero
        }
        
        if(_index >= v->size)// if we want add element and him size are smaller, we reallocate data memory to prevent out of bounds        
        {
            v->size *=2; // the new size will multiply
            v->data = realloc(v->data,sizeof(void*)*v->size); // reallocating memory 
              
        }

          v->data[_index] = _data;         // adding elemetn in array
          v->id++; //increase element id
         
          
           
       
}

void* CVector_Front(CVector* v)
{
    return v->data[0];  //return first element of array
}

//warning  "pointer and int comparsion"
void* CVector_Back(CVector* v)
{
    int last = 0;

    if(v->size > 0)
    {
     
     for(int i = 0; i < v->size;i++)
        {
            if(CVector_Get(v,i) != NULL_ELEMENT) // if last element is just a garbage in memory we didn't return him
            {
                last=i;
            }
        }

        return v->data[last];
    }else return 0;
}


void CVector_PushBack(CVector* v, void* _data) //This algorithm works similar to CVetor_Add
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

void CVector_Assign(CVector* v,int _count, void* _data)
{
     for(int j = 0; j < _count;++j)
     {
        CVector_PushBack(v,_data);
     }
  
}

//warning  "pointer and int comparsion"
void CVector_PopBack(CVector* v) //Deleting last element
{
    int last = 0;

    if(v->id >= 0)
    {
     for(int i = 0; i < v->size;i++)
        {
            if(CVector_Get(v,i) != NULL_ELEMENT) //if last elemnt isn't garbage we take him index in array
            {
                last=i;
            }
        }

       
    }

    if(!CVector_IsEmpty(v,last)) 
    {
            v->data[last] = NULL_ELEMENT; // delete element
            v->size--; //decrease size variable
            v->id --; //decrease id variable

            v->data = realloc(v->data,sizeof(void*)*v->size); // reallocate memory for new size of data array
    }
}


void CVector_Delete(CVector* v, int _index)
{
      if(v->size > 0 && v->id > 0)
      {
          v->data[_index] = NULL_ELEMENT;
          v->size--;
          v->id--;

          v->data = realloc(v->data,sizeof(void*)*v->size);
      }  
}

void CVector_Clean(CVector* v) // Clean all array
{
    v->data = NULL; // sets all elements of data array to null
    v->size = 0; // sets size variable to zero
    v->id = 0; // sets id variable to zero

    v->data = malloc(sizeof(void*)*v->size);
}


void* CVector_Get(CVector* v, int _index)
{
    return v->data[_index];
}

//warning  "pointer and int comparsion"
int CVector_IsEmpty(CVector* v, int _index)
{
    if(v->data[_index] == NULL_ELEMENT)
    return 1;

    return 0;    
}

void CVector_Free(CVector* v)
{
    free(v); // free memory whats was allocated for array
}

void Show(CVector* v)
{
    for(int i = 0; i < v->size;i++)
    {
        if(v->data[i] != NULL_ELEMENT)
        {
            printf("Vector[%d]:=%d \n",i,v->data[i]);
        }
    }
}