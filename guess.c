#include <stdio.h>

int main() {
    int guess, number;

    // Loop from 1 to 100 sequentially
    for (number = 1; number <= 100; number++) {
        printf("Guess a number between 1 and 100: ");
        scanf("%d", &guess);

        if (number == guess) {
            printf("Congratulations! The number is %d.\n", number);
            break;  // Exit the loop when the number matches the guess
        } else {
            printf("SORRY! Try again.\n");
        }
    }

    return 0;
}
