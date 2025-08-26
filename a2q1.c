//1. largest and smallest of two numbers.
#include<stdio.h>
int main()
{
    int no1,no2;
    printf("Enter no1: ");
    scanf("%d",&no1);

    printf("\nEnter no2: ");
    scanf("%d",&no2);

    if(no1>no2)
    {
        printf("\nNO1 : %d is largest ",no1);
        printf("\nNO2 : %d is smallest ",no2);
    }
    else {
        printf("\nNO1 : %d is smallest ",no2);
        printf("\nNO2 : %d is largest ",no1);
    }

    return 0;
}
