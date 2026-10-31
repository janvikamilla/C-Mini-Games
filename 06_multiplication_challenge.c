#include <stdio.h>

int main()
{
    int number, i;

    printf("=== MULTIPLICATION CHALLENGE ===\n");
    printf("Enter a number: ");
    scanf("%d", &number);

    printf("\nMultiplication Table of %d\n", number);

    for(i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", number, i, number * i);
    }

    printf("\nChallenge Completed!\n");

    return 0;
}
