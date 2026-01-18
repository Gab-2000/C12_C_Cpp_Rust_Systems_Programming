#include <stdio.h>

// C macros: text substitution, no type checking 
#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main(void) {
    // Safe usage
    int m = MAX(3, 5);
    printf("max=%d\n", m);

    // Unsafe usage: side effects in arguments
    int x = 10;
    int y = 5;

    int result = MAX(++x, y);  // Expanded as: ((++x) > (y) ? (++x) : (y)) 

    printf("x=%d, result=%d\n", x, result); // x is incremented twice
    return 0;
}
