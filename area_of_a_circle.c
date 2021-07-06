// Finding The Area Of A Circle

#include<stdio.h>
int main()
{
    int radius;
    float area, pi=3.14;
    printf("Area Calculator Of A Circle --> \n\n");
    printf("Enter the radius of the circle:");
    scanf("%d",&radius);
    area=pi*radius*radius;
    printf("The area of a circle of radius %d unit is %.2f sq. unit",radius,area);
    return 0;
}