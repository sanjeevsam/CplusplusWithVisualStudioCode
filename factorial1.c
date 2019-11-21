#include<stdio.h>
#include<conio.h>
int factorial(int );
int main()
{
    int a,fact;
    printf("enter value of a:");
    scanf("%d",&a);
    fact=factorial(a);
    printf("factorial of %d is %d ",a,fact);
    
}
int factorial(int a)
{
    if(a==0 || a<0)
    {
        return 1;
    }
    else
    {
        return (a*factorial(a-1));
    }
    
    
}
