// C: error handling via return codes
#include <stdio.h>

int parse_positive(int x, int *out) {
    if (x <= 0) return 0;   // failure
    *out = x;
    return 1;              // success
}

int main() {
    int value = 0;
    if (!parse_positive(-3, &value)) {
        printf("Error: input must be positive\n");
        return 1;
    }
    printf("ok: %d\n", value);
    return 0;
}
/* The compiler does not enforce error handling. Forgetting to check return values can silently propagate errors. */