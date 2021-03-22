#include <stdio.h>
// for including the rand function
#include <stdlib.h>
// for time lib use
#include <time.h>

int main()
{
    int number;
    // for new number everytime
    srand(time(0));
    // for random number generation
    number = rand() % 100 + 1;
    // printf("%d", number);
    int guess, turn = 1;
    printf("You have to guess the nuumber between 0 - 100 !!!\n");
    // not the best way better was do while loop so we have at keast one run time before loop
    for (guess; guess != number; turn++)
    {
        scanf("%d", &guess);
        if (guess < number)
        {
            printf("The number is bigger than you guess !!!\n");
        }
        else if (guess > number)
        {
            printf("The number is smaller than you guess !!!\n");
        }
        else
        {
            printf("You guessed the number is %d turns !!!\n", turn);
            break;
        }
    }

    return 0;
}