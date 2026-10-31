#include <stdio.h>

int main()
{
    int answer, score = 0;

    printf("=== GENERAL KNOWLEDGE QUIZ ===\n");

    printf("\n1. Which planet is known as the Red Planet?\n");
    printf("1. Earth  2. Mars  3. Venus\n");
    scanf("%d", &answer);

    if(answer == 2)
    {
        printf("Correct!\n");
        score++;
    }
    else
        printf("Wrong Answer!\n");

    printf("\n2. How many days are there in a week?\n");
    printf("1. 5  2. 6  3. 7\n");
    scanf("%d", &answer);

    if(answer == 3)
    {
        printf("Correct!\n");
        score++;
    }
    else
        printf("Wrong Answer!\n");

    printf("\n3. Which language are we learning?\n");
    printf("1. C  2. Java  3. Python\n");
    scanf("%d", &answer);

    if(answer == 1)
    {
        printf("Correct!\n");
        score++;
    }
    else
        printf("Wrong Answer!\n");

    printf("\nYour Final Score: %d/3\n", score);

    return 0;
}
