#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int getGuess() {
    int guess;
    printf("Can you guess what it is? ");
    scanf("%d", &guess);  
    return guess;
}


void printSuccess() {
    printf("Congratulations! You did it.\n");
}

void printTryAgain(int guess, int number) {
    if (guess < number) {
        printf("Your guess is low. Try again:\n");
    } else if (guess > number) {
        printf("Your guess is high. Try again:\n");
    }
}


void printSorry(int number) {
    printf("Sorry. The number was %d.\n", number);
    printf("You should have gotten it by now.\n");
    printf("Better luck next time.\n");
}

int main() {
    int number, guess, tries = 0;

   
    srand(time(NULL));
    number = rand() % 20 + 1;  


    printf("I am thinking of a number between 1 and 20.\n");

    
    while (tries < 5) {
        guess = getGuess();  
        tries++;

        if (guess == number) {
            printSuccess();  
            return 0;        
        } else {
            if (tries < 5) {
                printTryAgain(guess, number);  
            }
        }
    }

   
    printSorry(number);

    return 0;
}
