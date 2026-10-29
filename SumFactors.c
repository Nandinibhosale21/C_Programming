#include<stdio.h>
#include<stdlib.h>

int SumFactors(int iNo)
{
    int iCnt=0, iSum=0;

    for(iCnt=1; iCnt<=iNo/2; iCnt++)
     {
      if((iNo % iCnt) == 0)
      {
        iSum= iSum+iCnt;
      }
     }
     return iSum;
}

int main()
{
     int iValue=0, iret=0;
    
     printf("Enter Number: \n");
     scanf("%d", &iValue);
      
    iret = SumFactors(iValue);
    printf("Summation of factors: %d\n",iret);
     

    return EXIT_SUCCESS;
}

/// time complexity: O(N/2)