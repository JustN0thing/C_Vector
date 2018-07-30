#include "CVector.h"
#include<conio.h>

int main()
{

    CVector vect;

    CVector_Init(&vect);

    CVector_PushBack(&vect,12);
    CVector_PushBack(&vect,15);
    CVector_PushBack(&vect,25);
   CVector_PushBack(&vect,45);
    CVector_Add(&vect,500,13); 
     CVector_Add(&vect,200,14); 
     
   

  
    int a = (int)CVector_Front(&vect);
    int b = (int)CVector_Back(&vect);

    
    
    printf("%d\n",a);
    printf("%d\n",b);
    Show(&vect);
    _getch();
    return 0;
}