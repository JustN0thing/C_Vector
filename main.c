#include "CVector.h"
#include <conio.h>

int main()
{
    
    CVector vect;


  
    CVector_Init(&vect);    
  
    CVector_Assign(&vect,15,10);
    
    printf("Size before fit:%d  \n", CVector_Capacity(&vect));
    CVector_Fit(&vect);
    printf("Size after fit:%d  \n", CVector_Capacity(&vect));
   
      
     

        
    
    Show(&vect);
    _getch();
    return 0;
}