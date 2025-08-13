Write a C program to input radius of a circle from user and find diameter, circumference and area of the circle. How to calculate diameter, circumference and area of a circle whose radius is given by user in C programming. Logic to find diameter, circumference and area of a circle in C.

#include<stdio.h>
int main()
{
    float radius,diameter,circumference,area;
    const float pi=3.1416;
    printf("Enter radius of a circle:\n");
    scanf("%f",&radius);
    diameter=2*radius;
    circumference=2*pi*radius;
    area=pi*radius*radius;
    printf("Diameter=%f\n",diameter);
    printf("Circumference=%f\n",circumference);
    printf("Area=%f\n",area);
    return 0;
}
