#include <stdio.h>

int main()
{
    int password;
    int secret = 1234;

    printf("=== PASSWORD GUESSING GAME ===\n");
    printf("Guess the 4-digit password: ");
    scanf("%d", &password);

    if(password == secret)
    {
        printf("Correct Password!\n");
        printf("You Won!\n");
    }
    else
    {
        printf("Wrong Password!\n");
        printf("Game Over!\n");
    }

    return 0;
}
