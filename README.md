# Guess a Number Game

This is a simple game where the user has to guess a number between 1 and 100.

## How to Play

1. The program generates a random number.
2. The user enters their guess.
3. The program compares the user's guess to the random number.
4. If the guess is correct, the user wins.
5. If the guess is incorrect, the program tells the user if their guess is too low or too high.
6. The user continues to guess until they guess the correct number.

## Compiling and Running the Game

To compile the game,  use the following command:
```
gcc guess.c -o guess
```

Running and playing the game:
```
$ ./guess
Guess a number between 1 and 100: 50
Your guess is too low.
Guess a number between 1 and 100: 80
Your guess is too high.
Guess a number between 1 and 100: 60
Your guess is too low.
Guess a number between 1 and 100: 70
Your guess is too high.
Guess a number between 1 and 100: 65
Your guess is too high.
Guess a number between 1 and 100: 63
Your guess is too low.
Guess a number between 1 and 100: 61
Your guess is too low.
Guess a number between 1 and 100: 62
Your guess is too low.
Guess a number between 1 and 100: 64
You guessed the number!
```
