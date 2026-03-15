/* Problem: Guessing game program

   Algorithm: 1. Start Program
              2. Initialize Random Number
              3. Introduce Game
              4. Repeat Guessing Loop (up to 5 attempts)
              5. After 5 Attempts (if not guessed)
              6. End Program

    Developed by: Wesley Kil
    Date: 14/03/2026
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function prototypes
int getGuess();
void printSuccess();
void printHint(int guess, int number);
void printSorry(int number);

int main() {
    // Student details
    printf("Name: Wesley Kil\n");
    printf("Student ID: 220106\n");
    printf("Date: 14/03/2026\n\n");

    srand(time(NULL)); // Seed random number generator
    int number = rand() % 20 + 1; // Random number between 1 and 20
    int guess, i;

    printf("I am thinking of a number between 1 and 20.\n");

    for (i = 1; i <= 5; i++) {
        guess = getGuess();

        if (guess == number) {
            printSuccess();
            return 0; // End program immediately
        } else {
            printHint(guess, number);
        }
    }

    // If loop ends without success
    printSorry(number);
    return 0;
}

// Function to get user guess
int getGuess() {
    int g;
    printf("Can you guess what it is? ");
    scanf("%d", &g);
    return g;
}

// Function to print success message
void printSuccess() {
    printf("Congratulations! You did it.\n");
}

// Function to print hints
void printHint(int guess, int number) {
    if (guess < number) {
        printf("Your guess is low. Try again:\n");
    } else {
        printf("Your guess is high. Try again:\n");
    }
}

// Function to print sorry message
void printSorry(int number) {
    printf("Sorry. The number was %d. You should have gotten it by now. Better luck next time.\n", number);
}