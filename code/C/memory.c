// C: manual memory management
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p = malloc(sizeof *p); 
    if (!p) return 1; // Must in C to handle allocation failure

    *p = 42;
    printf("value=%d\n", *p);

    free(p); // Manually free memory to prevent leaks

    // Using p after free would be undefined behavior
    return 0;
}

/* The programmer is fully responsible for allocation and deallocation.
Use-after-free errors are not detected by the compiler. */