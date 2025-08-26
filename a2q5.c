//5) Find out net sales where net sales = gross sales – discount.If gross sales>20000, discount is 15% If gross sales >10000, discount is 10% otherwise 5%.
#include<stdio.h>
int main()
{
    int net=0,gross=0,discount=0;
    
    printf("\nEnter your gross sales : ");
    scanf("%d",&gross);
    
    if(gross>20000)
    {
        discount=0.15*gross;
        net=gross-(discount);
        printf("\nYour Gross sales is : %d",gross);
        printf("\nYour Discount is : %d",discount);
        printf("\nYour Net Sales is : %d",net);
    }
    else if(gross>10000)
    {
        discount=0.1*gross;
        net=gross-(discount);
        printf("\nYour Gross sales is : %d",gross);
        printf("\nYour Discount is : %d",discount);
        printf("\nYour Net Sales is : %d",net);
    }
    else
    {
        discount=0.05*gross;
        net=gross-(discount);
        printf("\nYour Gross sales is : %d",gross);
        printf("\nYour Discount is : %d",discount);
        printf("\nYour Net Sales is : %d",net); 
        
    }
    return 0;
    
}
