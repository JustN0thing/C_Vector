#pragma once

#ifndef _C_VECTOR_H
#define _C_VECTOR_H

#include <stdlib.h>

#define ArraySize(x) (sizeof(x)/sizeof(x)[0])


typedef struct _vector
{
    int id;
    void** data;
    size_t size;

}Vector;




#endif