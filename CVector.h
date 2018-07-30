#pragma once

#ifndef _C_VECTOR_H
#define _C_VECTOR_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ArraySize(x) (sizeof(x)/sizeof(x[0]))

//Implementation of Array
typedef struct _vector
{
    int id;
    void** data;
    size_t size;    

}CVector;


void CVector_Init(CVector* v ); // Initilaze structs variables
void CVector_Add(CVector* v,void *_data , int _index); //Adding data to array by the index
void* CVector_Front(CVector* v);    //Getting first elemetn of array
void* CVector_Back(CVector* v); //Getting last element of array
void CVector_PushBack(CVector* v , void*);  //Adding element in the end of array
void CVector_PopBack(CVector*v);    //Deleting last element in array
void CVector_IsEmpty(CVector*v,int _index);
void CVector_Delete(CVector* v , int _index); //Delete element by the index
void* CVector_Get(CVector* v, int _index);  //Getting element by the index
void CVector_Assign(CVector* v, int _count, void* _data); //Assing a count of data in array
void CVector_Free(CVector* v);  //Free memory which is was allocated for array


#endif