// C: pointer arithmetic
#include <stdio.h>

int main() {
    int arr[3] = {10, 20, 30};
    int *p = arr;

    printf("%d\n", *p);   // 10
    p = p + 1;
    printf("%d\n", *p);   // 20

    // p = p + 10; // undefined behavior

    return 0;
}

/* C allows unrestricted pointer arithmetic with no runtime or compile-time safety checks. */