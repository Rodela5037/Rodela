 Write a C program to check whether two integers are equal.
   #include<stdio.h>
    int main()
{
    int a,b;
    printf("enter value:\n");
    scanf("%d",&a);
    printf ("enter value:\n");
    scanf("%d",&b);
    if( a == b ){
         printf("Equal");
    }
    else{
         printf("Not Equal");
    }
    return 0;
}
