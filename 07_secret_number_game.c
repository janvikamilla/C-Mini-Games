#include <stdio.h>

int main()
{
    int guess;
    int secret = 8;
    int attempts = 3;

    printf("=== SECRET NUMBER GAME ===\n");
    printf("Guess the number between 1 and 10.\n");
    printf("You have 3 attempts!\n");

    while(attempts > 0)
    {
        printf("\nEnter your guess: ");
        scanf("%d", &guess);

        if(guess == secret)
        {
            printf("Amazing! Correct Guess!\n");
            break;
        }
        else if(guess < secret)
        {
            printf("Too Low!\n");
        }
        else
        {
            printf("Too High!\n");
        }

        attempts--;
    }

    if(attempts == 0 && guess != secret)
    {
        printf("Game Over! The number was 8.\n");
    }

    return 0;
}
