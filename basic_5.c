// write a program that calculates compound interest.
#include<stdio.h>
#include<math.h>
int main()
{
    float C_i,P,r,t;
    printf("Enter th e values of p,r,t: ");
    scanf("%f %f %f",&P,&r,&t);
    C_i=P*(pow(1+r/100,t))-P;
    printf("COMPOUND INTEREST=%f",C_i);
    return 0;
}
