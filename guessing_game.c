#include <stdio.h>

int main()
{

    int secretNumber = 5;
    int guessNumber;
    int guessCount = 0;
    int guessLimit = 3;
    int outOfGuess = 0;
    int guessLeft = guessLimit;

    while (guessNumber != secretNumber && outOfGuess == 0)
    {

        if (guessCount < guessLimit)
        {

            printf("Guess Left : %d\n", guessLeft);
            printf("Enter a Number: ");
            scanf("%d", &guessNumber);
            guessCount++;
            guessLeft--;
        }
        else
        {
            outOfGuess = 1;
        }
    }

    if (outOfGuess == 1)
    {
        printf("Out of Guess! You lost the game.");
    }
    else
    {
        printf("Yoo!! You Won the game!");
    }

    return 0;
}