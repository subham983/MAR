#include<stdio.h>
void printArray(int *ptr, int n)
{
    for(int i=0; i<n; i++)
    {
        printf("The marks of student %d is %d \n", i+1, *ptr);
        ptr++;
    }
}
int main()
{
    int marks[5]={86,58,98,75,66};
    printArray(marks,5);
    return 0;
}