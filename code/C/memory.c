// C: manual memory management
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p = malloc(sizeof *p);
    if (!p) return 1;

    *p = 42;
    printf("value=%d\n", *p);

    free(p);

    // Using p after free would be undefined behavior
    // printf("%d\n", *p);
    return 0;
}

/* The programmer is fully responsible for allocation and deallocation.
Use-after-free errors are not detected by the compiler. */