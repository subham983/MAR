#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int number, guess, nguesses=1;
    srand(time(0));
    number=rand()%100+1;
    do
    {
        printf("Enter a number from 0 to 100 :");
        scanf("%d",&guess);
        if(guess>number)
        printf("Lower number please");
        else if(guess<number)
        printf("Higher number please");
        else
        printf("You have guessed the number in %d attempts",nguesses);
        nguesses++;
    } while (guess!=number);
     return 0;
}