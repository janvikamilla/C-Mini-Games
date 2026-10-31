#include <stdio.h>

int main()
{
    int number, sum = 0, digit;

    printf("=== LUCKY NUMBER GAME ===\n");
    printf("Enter a number: ");
    scanf("%d", &number);

    if(number < 0)
    {
        printf("Please enter a positive number!\n");
        return 0;
    }

    while(number > 0)
    {
        digit = number % 10;
        sum = sum + digit;
        number = number / 10;
    }

    printf("Sum of digits = %d\n", sum);

    if(sum % 2 == 0)
        printf("You have an EVEN lucky number!\n");
    else
        printf("You have an ODD lucky number!\n");

    return 0;
}
