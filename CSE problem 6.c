Write a C program to input length in centimeter and convert it to meter and kilometer. How to convert length from centimeter to meter and kilometer in C programming. Length conversion program in C from centimeter to meter and centimeter to kilometer.
#include<stdio.h>
int main()
{
    float centimeter,meter,kilometer;
    printf("enter value of centimeter:\n");
    scanf("%f",&centimeter);
    meter=centimeter/100;
    kilometer=centimeter/100000;
    printf("centimeter to meter:%f\n",meter);
    printf("centimeter to kilometer:%f\n",kilometer);
    return 0;
}
