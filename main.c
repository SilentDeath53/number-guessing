#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int targetNumber;
    int guess;
    int attempts = 0;

    srand(time(0));
    targetNumber = rand() % 100 + 1;

    printf("Welcome to the Number Guessing Game!\n");
    printf("I have picked a number between 1 and 100. Try to guess it.\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        attempts++;

        if (guess > targetNumber) {
            printf("Too high! Try again.\n");
        } else if (guess < targetNumber) {
            printf("Too low! Try again.\n");
        } else {
            printf("Congratulations! You guessed the number %d in %d attempts.\n", targetNumber, attempts);
        }
    } while (guess != targetNumber);

    return 0;
}
