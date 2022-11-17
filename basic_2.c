// Write a program to enter two angles of a triangle and find the third angle.
#include<stdio.h>
int main()
{
    float a,b;
    printf("Enter two angles of a triangle: ");
    scanf("%f %f",&a,&b);
    float third;
    printf("The third angle of the triangle is: %.2f",(180-(a+b)));
    return 0;
}
