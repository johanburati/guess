#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  // Seed the random number generator with the current time.
  srand(time(NULL));

  // Generate a random number.
  int secretNumber = rand() % 100;

  // Start the game loop.
  int guess;
  do {
    // Get the user's guess.
    printf("Guess a number between 1 and 100: ");
    scanf("%d", &guess);

    // Check if the guess is correct.
    if (guess == secretNumber) {
      printf("You guessed the number!\n");
      break;
    } else if (guess < secretNumber) {
      printf("Your guess is too low.\n");
    } else {
      printf("Your guess is too high.\n");
    }
  } while (1);

  return 0;
}
