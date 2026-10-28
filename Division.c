#include<stdio.h>
#include<stdlib.h>

void checkDivisible(int ino)
{
   if((ino%3)==0)
   {
    printf("number is divisible:\n");
   }
   else
   {
     printf("number is not divisible:\n");
   }

}
int main()
{
     int iValue=0;
     printf("enter number:\n");
     scanf("%d",&iValue);


    checkDivisible(iValue);

    return EXIT_SUCCESS;
}