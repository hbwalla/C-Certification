#include <stdio.h>

int main(void) {
    int i;
   int swapped;
   int aux;
   int numbers[8];

   for (i = 0; i < 8; i++) {
        printf("Enter a number: ");
        scanf("%d", &numbers[i]);
   }

   do {
        swapped = 0;
        printf("Beginning of loop. Swapped: %d\n", swapped);
        // One pass`
        for (i = 0; i < 7; i++) {
            if (numbers[i + 1] < numbers[i]) {
                swapped = 1;
                aux = numbers[i];
                numbers[i] = numbers[i + 1];
                numbers[i + 1] = aux;
            }
        }
        // Each time the loop is exited, swapped = 1, which satisfies the "while" condition.
        // Then, the program returns to the top and repeats the process, resetting swapped = 0.
        // The program will stop if the numbers don't satisfy the first condition 
        printf("Loop has been exited. Swapped: %d\n", swapped);
   } while (swapped);

   for (i = 0; i < 8; i++) {
        printf("%d", numbers[i]);
   }

   return 0;
}
