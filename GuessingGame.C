#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, attempts = 0;
    srand(time(0)); // Seed random number generator
    number = rand() % 100 + 1; // Random number between 1 and 100

    printf("Guess the number (1-100): ");
    do {
        scanf("%d", &guess);
        attempts++;
        if (guess > number) {
            printf("Too high! Try again: ");
        } else if (guess < number) {
            printf("Too low! Try again: ");
        } else {
            printf("Congratulations! You've guessed the number %d in %d attempts.\n", number, attempts);
        }
    } while (guess != number);

    return 0;
}
