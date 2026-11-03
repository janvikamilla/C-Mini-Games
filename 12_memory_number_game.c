#include <stdio.h>

int main()
{
    int numbers[5] = {4, 7, 2, 9, 5};
    int answer, score = 0;
    int i;

    printf("=== MEMORY NUMBER GAME ===\n");
    printf("Remember these numbers:\n");

    for(i = 0; i < 5; i++)
    {
        printf("%d ", numbers[i]);
    }

    printf("\n\nEnter the numbers one by one:\n");

    for(i = 0; i < 5; i++)
    {
        printf("Number %d: ", i + 1);
        scanf("%d", &answer);

        if(answer == numbers[i])
        {
            printf("Correct!\n");
            score++;
        }
        else
        {
            printf("Wrong!\n");
        }
    }

    printf("\nYour Final Score: %d/5\n", score);

    if(score == 5)
        printf("Perfect Memory! You Win!\n");
    else
        printf("Good Try! Play Again!\n");

    return 0;
}
