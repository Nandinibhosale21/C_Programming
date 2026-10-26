#include<stdio.h>
#include<stdlib.h>

int Maximum(int ino1,int ino2, int ino3)
{   
   if((ino1>ino2)&&(ino1>ino3))
   {
   return ino1;
   }
   else if((ino2>ino1)&&(ino2>ino3))
   {
     return ino2;
   }
   else
   {
    return ino3;
   }
}  
int main()
{
    int iValue1=0, iValue2=0, iValue3=0;
    int iResult = 0;

    printf("Enter first number: \n");
    scanf("%d",&iValue1);

    printf("Enter second number: \n");
    scanf("%d",&iValue2);

    printf("Enter thrid number: \n");
    scanf("%d",&iValue3);
    
    iResult =Maximum(iValue1, iValue2, iValue3);

    printf("Maximum value is: %d \n" , iResult);

    return EXIT_SUCCESS;
}

