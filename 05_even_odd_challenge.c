#include <stdio.h>

int main()
{
    int number;

    printf("=== EVEN OR ODD CHALLENGE ===\n");
    printf("Enter a number: ");
    scanf("%d", &number);

    if(number % 2 == 0)
    {
        printf("EVEN! You got it!\n");
    }
    else
    {
        printf("ODD! You got it!\n");
    }

    return 0;
}
