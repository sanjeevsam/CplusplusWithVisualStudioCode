#include<stdio.h>
#include<conio.h>
void factorial(int );
int main()
{
    int a;
    printf("enter value of a:");
    scanf("%d",&a);
    if(a<0)
    {
        printf("invalid input, please input positive value");
    }
    else if(a>0)
    {
        factorial(a);
    }
    else
    {
        printf("factorial of 0 is 1");
    }
    
}
void factorial(int a)
{
    int fact=1,i;
    for(i=a;i>0;i--)
    {
        fact*=i;
    }
    printf("factorial of %d is %d",a,fact);  
    
}
