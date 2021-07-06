// 1
// 22
// 333       <-- Print the following pattern
// 4444
// 55555

#include<stdio.h>
void printPattern(int n)
{
    int i;
    if(n==1)
    {
        printf("1 \n");
        return;
    }
    printPattern(n-1);
    for(i=1;i<=n;i++)
    {
        printf("%d",n);
    }
    printf("\n");
}
int main()
{
    int n;
    printf("Enter the number of rows : ");
    scanf("%d",&n);
    printPattern(n);
    return 0;
}