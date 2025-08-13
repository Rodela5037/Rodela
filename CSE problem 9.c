Write a C program to create a simple calculator using switch statement that performs addition, subtraction, multiplication, division, and modulus based on user input.
  #include<stdio.h>
int main ()
{   double a,b;
    char op;
    printf("enter number of a:\n");
    scanf("%lf",&a);
    printf("enter number of b:\n");
    scanf("%lf",&b);
    printf(" enter operator (+,-,*,/,%%):\n");
    scanf(" %c",&op);
    switch (op){
    case'+': printf("%lf+%lf=%lf",a,b,a+b);
    break;
    case'-': printf("%lf-%lf=%lf",a,b,a-b);
    break;
    case'*': printf("%lf*%lf=%lf",a,b,a*b);
    break;
    case'/': printf("%lf/%lf=%lf",a,b,a/b);
    break;
    case'%':
        int x = (int)a;
        int y = (int)b;
       if (y != 0)
       printf("%d %% %d = %d\n", x, y, x % y);
       else
        printf("error\n");
break;}
    return 0;}
