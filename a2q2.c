//2. largest and smallest of three numbers.
#include<stdio.h>
int main()
{
    int no1,no2,no3;
    printf("Enter no1: ");
    scanf("%d",&no1);

    printf("\nEnter no2: ");
    scanf("%d",&no2);
    
    printf("\nEnter no3: ");
    scanf("%d",&no3);

    if(no1>no2)
    {
        if(no1>no3)
        {
            printf("\nno1 : %d is the largest ",no1);
            printf("\nno2 : %d is the smallest ",no2);
        }
        else{ 
            printf("\nno3 : %d is the largest ",no3);
            printf("\nno2 : %d is the smallest ",no2);
        }
    }
        else{
            if(no2>no3)
            {
            printf("\nno2 : %d is the largest ",no2);
            printf("\nno1 : %d is the smallest ",no1);
            }
            else{
            printf("\nno3 : %d is the largest ",no3);
            printf("\nno1 : %d is the smallest ",no1);
            }
        }    
    return 0;
}
