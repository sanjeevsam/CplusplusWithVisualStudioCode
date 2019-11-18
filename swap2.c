#include<stdio.h>
#include<conio.h>
void swap(int ,int );
int main()
{
    int a,b;
    printf("enter value of a:");
    scanf("%d",&a);
    printf("enter value of b:");
    scanf("%d",&b);
    printf("Before swapping number is a =%d,b =%d\n",a,b);
    swap(a,b);
}
void swap(int a,int b)
{
    b=a^b;          // swaping of number using bitwise logic operator(x-or)
    a=b^a;
    b=b^a;
     printf("after swapping number is a=%d,b=%d\n",a,b);
}
