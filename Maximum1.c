#include<stdio.h>
#include<stdlib.h>
void Maximum(int ino1,int ino2)
{   
   if(ino1> ino2)
   {
      printf("Maximum is %d \n", ino1);
    }
    else
    {
        printf("maximum is %d \n", ino2);
    }
}
int main()
{
    int iValue1=0, iValue2=0, iResult=0;

    printf("Enter first number: \n");
    scanf("%d",&iValue1);
     printf("Enter second number: \n");
    scanf("%d",&iValue2);

    if(iValue1> iValue2)
    {
        printf("Maximum is %d \n", iValue1);
    }
    else
    {
        printf("maximum is %d \n", iValue2);
    }
    return EXIT_SUCCESS;
}