// write a program to enter marks of five subjects and calculate total,average and percentage
#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("Enter marks of student: ");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    int total=a+b+c+d+e;
    float average=total/5.0;
    float percentage=total/5;
    printf("Total= %d\n",total);
    printf("Average= %f\n",average);
    printf("Percentage= %f\n",percentage);
    return 0;
}
