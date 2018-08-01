#include "CVector.h"
#include<conio.h>

int main()
{

    CVector vect;

    CVector_Init(&vect);
    CVector_PushBack(&vect,120);
    CVector_Assign(&vect,10,150);
    CVector_PushBack(&vect,220);
  
  
    
    
    
    
    Show(&vect);
    _getch();
    return 0;
}