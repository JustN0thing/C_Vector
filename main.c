#include "CVector.h"
#include<conio.h>

int main()
{

    CVector vect;

    CVector_Init(&vect);

    CVector_Add(&vect,50,0);    
    CVector_Add(&vect,150,1);
    CVector_Add(&vect,200,2);
    CVector_Add(&vect,250,3);
    CVector_Add(&vect,300,4);

  
    int a = (int)CVector_Front(&vect);
    int b = (int)CVector_Back(&vect);

    CVector_IsEmpty(&vect,1);
    
    printf("%d\n",a);
    printf("%d\n",b);

    _getch();
    return 0;
}