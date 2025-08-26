//3) Find out net salary where net salary = gross salary + allowances –deductions.

#include<stdio.h>
int main()
{
    int net,gross,allowance,deduction;
    
    printf("\nenter your gross salary:");
    scanf("%d",&gross);
    
    if(gross>10000)
    {   
        allowance=0.1*gross;
        deduction=0.03*gross;
        net=gross+allowance-deduction;
        printf("Net salary is :%d",net);
    }
    else if(gross>5000)
    {
        allowance=0.07*gross;
        deduction=0.02*gross;
        net=gross+allowance-deduction;
        printf("Net salary is :%d",net);
    }
    
    return 0;
}
