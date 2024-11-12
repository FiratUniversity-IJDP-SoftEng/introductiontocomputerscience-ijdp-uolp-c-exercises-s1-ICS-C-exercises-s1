
#include <stdio.h>

int main() {
    char pet[10];
    printf("Do you have a cat or a dog? ");
    scanf("%s", pet);
    
    if (pet[0] == 'c' || pet[0] == 'C') {
        printf("Meow meow!\n");
    } else if (pet[0] == 'd' || pet[0] == 'D') {
        printf("Woof woof!\n");
    } else {
        printf("I don't know that pet!\n");
    }
    return 0;
}
