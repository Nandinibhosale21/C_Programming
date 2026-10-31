#include<stdio.h>
#include<stdlib.h>
int CountDigit(int iNo)
{
   int iDigit=0;
   int iCount=0;
   if(iNo<0)
   {
     iNo = -iNo;
   }
   while(iNo!=0)
   {
        iDigit=iNo%10;
        iCount++;
        iNo=iNo/10;
   }
   return iCount;
  }
  
int SumDigit(int iNo)
{
   int iDigit=0;
   int iSum=0;
   if(iNo<0)
   {
     iNo = -iNo;
   }
   while(iNo!=0)
   {
    iDigit=iNo%10;
    iSum=iSum+iDigit;
    iNo=iNo/10;
   }
   return iSum;
  }

int main()
{
    int iValue=0;
    int iSum=0;
    int iCount=0;
    float fAvg=0.0f;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    iSum=SumDigit(iValue);
   iCount=CountDigit(iValue);
   fAvg=(float)iSum/(float)iCount; 

    printf("Number of digit : %d\n",iCount);
    printf("Summation of Digit : %.d\n", iSum);
    printf("Average of Digit : %.2f\n", fAvg);
    return EXIT_SUCCESS;
}
