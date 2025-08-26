//6. Grades distribution.
#include<stdio.h>
int main()
{
    int math,sci,ss,total=0,average=0;
    printf("enter marks in math:");
    scanf("%d",&math);
    printf("enter marks in science:");
    scanf("%d",&sci);
    printf("enter marks in social science:");
    scanf("%d",&ss);
    
    total=math+sci+ss;
    average=total/3;
    
    printf("\nYour total marks are : %d",total);
    printf("\nYour average is : %d",average);
    
    if(average>=70)
    {
        printf("\nYou have passed with DISTINCTION.");
    }
    else if(average>=60)
    {
        printf("\nYou have achieved FIRST CLASS.");
    }
    else if(average>=50)
    {
        printf("\nYou have achieved SECOND CLASS.");
    }
    else if(average>=35)
    {
        printf("\nYou have achieved THIRD CLASS.");
    }
    else
    {
        printf("\nYou have FAILED.");
    }
    

    return 0;
    
}
