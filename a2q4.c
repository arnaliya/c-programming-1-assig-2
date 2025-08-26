//divisibility of 7
#include<stdio.h>
int main()
{
    int no,r;
    printf("enter number whose divisiblity you want to check with 7:\n");
    scanf("%d",&no);
    
    r=no%7;
    
    if(r==0)
    {
        printf("\nThe number : %d is divisible by 7.",no);
    }
    else{
        printf("\nThe number : %d is NOT divisible by 7.",no);
    }
    
    return 0;
}
