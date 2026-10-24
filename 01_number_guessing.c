#include <stdio.h>

int main()
{
int number = 7;
int guess;
printf("Welcome to Number Guessing Game!\n");
printf("Guess a number between 1 and 10: ");
scanf("%d", &guess);

if(guess == number)
{
    printf("Correct! You won!");
}
else if(guess < number)
{
    printf("Too low! The number was 7.");
}
else
{
    printf("Too high! The number was 7.");
}

return 0;

}
