Write a C program to input principle, time and rate (P, T, R) from user and find Simple Interest. How to calculate simple interest in C programming. Logic to find simple interest in C program.
#include<stdio.h>
int main ()
{
    float principal, rate, time, simple_interest;
    printf("Enter principal:\n");
    scanf("%f",&principal);
    printf("Enter rate:\n");
    scanf("%f",&rate);
    printf("Enter time:\n");
    scanf("%f",&time);
    simple_interest=(principal+rate+time)/100;
    printf("simple interest=%f\n",simple_interest);
    return 0;


}
