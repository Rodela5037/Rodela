Write a C program that takes one number as input from the user and prints its multiplication table using a loop.
#include<stdio.h>
int main()
{
    int a,i;
    printf(" enter a:");
    scanf("%d", &a);
    for (i=1; i <= 10; i++){
        printf("%d*%d=%d\n",a,i,a*i);
    } return 0;
}
