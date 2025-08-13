Write a C program to input temperature in Centigrade and convert to Fahrenheit. How to convert temperature from degree centigrade to degree Fahrenheit in C programming. Logic to convert temperature from Celsius to Fahrenheit in C.

#include<stdio.h>
int main()
{
    float Centigrade,Fahrenheit;
    printf("Enter value of centigrade:\n");
    scanf("%f",&Centigrade);
    Fahrenheit=(Centigrade*9/5)+32;
    printf("temperature from Centigrade to Fahrenheit is %f",Fahrenheit);
    return 0;
}
