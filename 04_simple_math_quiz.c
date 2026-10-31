#include <stdio.h>

int main()
{
    int answer;

    printf("=== MATH QUIZ GAME ===\n");
    printf("Solve this question:\n");
    printf("15 + 10 = ");

    scanf("%d", &answer);

    switch(answer)
    {
        case 25:
            printf("Correct Answer! You Win!\n");
            break;

        default:
            printf("Wrong Answer! Better Luck Next Time.\n");
    }

    return 0;
}
