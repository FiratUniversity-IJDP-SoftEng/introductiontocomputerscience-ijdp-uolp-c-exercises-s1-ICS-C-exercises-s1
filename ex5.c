#include <stdio.h>

void sayHello(char name[]) {
    printf("Hello, %s!\n", name);
}

int main() {
    char userName[20];
    printf("What's your name? ");
    scanf("%s", userName);
    sayHello(userName);
    return 0;
}
