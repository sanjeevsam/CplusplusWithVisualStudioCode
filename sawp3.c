#include<stdio.h>
#include<conio.h>
void swap(int* ,int*); //declaration of function
int main()
{
    int a,b;
    printf("enter value of a:");
    scanf("%d",&a);
    printf("enter value of b:");
    scanf("%d",&b);
    printf("Before swapping number is a =%d,b =%d\n",a,b);
    swap(&a,&b);  //calling funtion
    printf("after swapping number is a=%d,b=%d\n",a,b);
}
void swap(int *x,int *y) //definition of function
{
     int temp;         // swaping of number using referance variable(by passing address of actual variable)
     temp=*x;
     *x=*y;
     *y=temp;
    
}
