Write a C program that takes two integer values as input from the user and prints the sum of all the numbers between them (including both values).
#include<stdio.h>
int main()
{
    int a,b,i,sum=0;
    printf("enter two number:");
    scanf("%d %d", &a, &b);
    if(a>b){
    int temp=a;
    a=b;
    b=temp;}
    for(i=a;i<=b;i++){
        sum=sum+i;

    }
    printf("sum=%d",sum);
    return 0;
}
