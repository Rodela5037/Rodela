1. Write a C program that takes two integer variables as input and swaps their values. After swapping, the first variable should contain the value of the second, and the second should contain the value of the first.
#include<stdio.h>
int main ()
{
        int a,b,temp;
        printf("enter value:\n");
        scanf("%d",&a);
        printf("enter value:\n");
        scanf("%d",&b);
        temp=a;
        a=b;
        b=temp;
        printf("%d,%d\n",a,b);
        return 0;
}
