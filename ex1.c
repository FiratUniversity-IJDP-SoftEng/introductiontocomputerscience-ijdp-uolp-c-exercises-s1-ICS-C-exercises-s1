#include <stdio.h>

int main() {
    int guess;
    printf("Guess a number between 1 and 5: ");
    scanf("%d", &guess);
    
    if (guess == 3) {
        printf("Correct! You're a great guesser!\n");
    } else {
        printf("Not quite! The number was 3.\n");
    }
    return 0;
}
