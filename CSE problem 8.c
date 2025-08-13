Write a C program to check whether a given year is a leap year or not using if-else statements. The user will input a year, and the program should display whether it is a leap year.
#include<stdio.h>
int main()
{
    int year;
    printf("enter year:\n");
    scanf("%d",&year);
    if( year%4==0 )
    {
        printf(" leap year is %d",year);
    } else if( year%100==0 && year%400==0 )
    {
        printf("leap year is %d",year);
    } else{ printf(" not leap year");}
}

