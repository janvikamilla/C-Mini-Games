#include <stdio.h>

int main()
{
    int choice, coin = 1;

    printf("=== COIN TOSS GAME ===\n");
    printf("1. Heads\n");
    printf("2. Tails\n");

    printf("Choose Heads or Tails: ");
    scanf("%d", &choice);

    printf("\nCoin Result: Heads\n");

    if(choice == coin)
        printf("Congratulations! You Win!\n");
    else if(choice == 2)
        printf("Sorry! You Lose!\n");
    else
        printf("Invalid Choice!\n");

    return 0;
}
