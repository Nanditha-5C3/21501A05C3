// write a program to enter p,t and r and calculates simple interest
#include<stdio.h>
int main()
{
    int p,t,r;
    float s_i;
    printf("Enter p t r: ");
    scanf("%d %d %d",&p,&t,&r);
    s_i=(p*t*r)/100;
    printf("Simple interest is: %f",s_i);
    return 0;
}

