#include<stdio.h>
int main()
{
    int a=10,b=20;
    printf("before swap\na=%d\nb=%d\n",a,b);
    int temp=a;
    a=b;
    b=temp;
    printf("After swap\na=%d\nb=%d\n",a,b);
}