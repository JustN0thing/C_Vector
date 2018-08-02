#include "CVector.h"
#include <conio.h>

int main()
{
    int a [12];
    CVector vect;
    
    CVector_Init(&vect);
    CVector_PushBack(&vect,120);
    CVector_Assign(&vect,10,150);
    CVector_PushBack(&vect,220);
  
   
        printf("Capacity:%d\n",CVector_Capacity(&vect));
        printf("Size:%d\n",CVector_Size(&vect));
   
        CVector_CopyToArray(&vect,&a);

        for(int i = 0; i<12;i++)
        printf("a[%d]:=%d\n",i,a[i]);
        
    
    //Show(&vect);
    _getch();
    return 0;
}