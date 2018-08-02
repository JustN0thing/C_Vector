#include "CVector.h"
#include <conio.h>

int main()
{
    
    CVector vect;


  
    CVector_Init(&vect);    
  
    CVector_Assign(&vect,15,55);
    
   printf("%d",CVector_Get(&vect,1));
   
      
     

        
    
   
    _getch();
    return 0;
}