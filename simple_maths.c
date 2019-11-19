#include<stdio.h>
#include<conio.h>
int main()
{
    int x=10,y=20;
    printf("sum is %d\n",x+y);
    printf("sub is %d\n",x-y);
    printf("mul is %d\n",x*y);
    printf("div is %d\n",x/y);//integer division
    //note---if you want floating poit division make x or y float type
    printf("div is %f",(float)x/y); // type casting of x (using type cast you can make x here float for short time)
}