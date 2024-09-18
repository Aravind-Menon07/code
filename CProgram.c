#include <stdio.h>

int main() {
    char name[50]; // Array to hold the name

    // Prompt the user for their name
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin); // Read a line of input

    // Greet the user
    printf("Hello, %s!", name);

    return 0;
}
