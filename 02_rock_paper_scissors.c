#include <stdio.h>

int main()
{
int user, computer = 2;

printf("ROCK PAPER SCISSORS GAME\n");
printf("1. Rock\n");
printf("2. Paper\n");
printf("3. Scissors\n");

printf("Enter your choice: ");
scanf("%d", &user);

if(user < 1 || user > 3)
{
    printf("Invalid choice!");
}
else if(user == computer)
{
    printf("It's a draw!");
}
else if(user == 1 && computer == 3)
{
    printf("You win!");
}
else if(user == 2 && computer == 1)
{
    printf("You win!");
}
else if(user == 3 && computer == 2)
{
    printf("You win!");
}
else
{
    printf("Computer wins!");
}
return 0;
}
