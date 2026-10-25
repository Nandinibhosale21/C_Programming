#include<stdio.h>
#include<stdlib.h>


void CheckEven(int ino)
{
     if((ino % 2) == 0)
        {
           printf("It is even number \n");
        }
        else
        {
            printf("It is odd number \n");
        }
}

int main()
{

    int iValue = 0;

        printf("enter number: \n");
        scanf("%d", &iValue);

       CheckEven(iValue);


    return EXIT_SUCCESS;
}