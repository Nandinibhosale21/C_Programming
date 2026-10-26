#include<stdio.h>
#include<stdlib.h>

int Maximum(int ino1,int ino2)
{   
    if(ino1> ino2)
        {
             return ino1;
        }
        else
        {
            return ino2;
        }
}  
int main()
{
    int iValue1=0, iValue2=0, iResult=0;

    printf("Enter first number: \n");
    scanf("%d",&iValue1);

    printf("Enter second number: \n");
    scanf("%d",&iValue2);
    
    iResult =Maximum(iValue1, iValue2);
    printf("maximum value is: %d \n" , iResult);

    return EXIT_SUCCESS;
}

