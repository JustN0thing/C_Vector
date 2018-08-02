#include "CVector.h"
#include <conio.h>

int main()
{
    int a [12];
    CVector vect,vv;
    void** arr;

  
    CVector_Init(&vect);
    CVector_Init(&vv);
   CVector_PushBack(&vect,5);
    CVector_Assign(&vect,10,10);
    CVector_PushBack(&vect,20);
    
    CVector_Assign(&vv,15,250);
   
    CVector_Swap(&vv,&vect);
   
      
        CVector_ToArray(&vv,&a);

        for(int i = 0; i<12;i++)
        printf("a[%d]:=%d\n",i,a[i]);
        
    
    //Show(&vect);
    _getch();
    return 0;
}