#include <stdio.h>

// First 10 numbers in fib sequence
int main(void) {
    
    int fib[10] = {1, 1};
    int i;

    for (i = 0; i < 10; i++) {
        fib[i + 2] = fib[i] + fib[i + 1];
    }

    for (i = 0; i < 10; i++) printf("%d\n", fib[i]);
    
    return 0;
}