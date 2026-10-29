#include<stdio.h>
#include<stdlib.h>

int Factorial(int iNo)
{
    int iCnt=0, ifact=0;

    ifact=1;
    for(iCnt=1; iCnt<=iNo; iCnt++)
     {
      ifact = ifact*iCnt;
     }
       return ifact;
}

int main()
{
     int iValue=0, iRet=0;
    
     printf("Enter Number: \n");
     scanf("%d", &iValue);
      
     iRet = Factorial(iValue);

     printf("Factorial is:%d\n",iRet);

    return EXIT_SUCCESS;
}