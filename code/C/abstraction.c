// C: abstraction via macros (no type checking)
#include <stdio.h>

#define MAX(a,b) ((a) > (b) ? (a) : (b))

int main() {
    int m = MAX(3, 5);
    printf("max=%d\n", m);
    return 0;
}
/* C macros are expanded by the preprocessor without type checking.
They provide maximum flexibility but may introduce subtle bugs due to multiple evaluations or side effects. */