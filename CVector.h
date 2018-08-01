//Author Artem Yagnuk 2018
#pragma once

#ifndef _C_VECTOR_H
#define _C_VECTOR_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ArraySize(x) ((sizeof(x))/(sizeof(x[0])) // for calculating length of array
#define NULL_ELEMENT -0x45520FF3

/*Implementation of std::vector in C
Its looks just like a dynamic struct array
*/
typedef struct _vector
{
    int id;
    void** data;
    size_t size;    
   
}CVector;

//Basic functions//////////////////////////////////////////////////////////////////////////
void CVector_Init(CVector* v ); // Initilaze structs variables

void CVector_Add(CVector* v,void *_data , int _index); //Adding data to array by the index

void* CVector_Front(CVector* v);//Getting first elemetn of array

void* CVector_Back(CVector* v);//Getting last element of array

void CVector_PushBack(CVector* v , void*);//Adding element in the end of array

void CVector_PopBack(CVector*v);//Deleting last element in array

int CVector_IsEmpty(CVector*v,int _index);//Checking for the empty element of array

void CVector_Delete(CVector* v , int _index);//Delete element by the index

void CVector_Clean(CVector* v);//Clean all array

void* CVector_Get(CVector* v, int _index);//Getting element by the index

void CVector_Assign(CVector* v, int _count, void* _data);//Assing a count of data in array

void CVector_Free(CVector* v);//Free memory which  was allocated for array

void Show(CVector* v); //Just for testing

//////////////////////////////////////////////////////////////////////////////////////////

//Additional functions///////////////////////////////////////////////////////////////////

void** CVector_GetData(CVector* v);//Return v->data array

int CVector_Size(CVector* v); //Return count of elements in array

size_t CVector_Capacity(CVector* v);//Returns capacity of data array

void CVector_Reserve(CVector* v); // Reserve memory manualy

///////////////////////////////////////////////////////////////////////////////////////


#endif