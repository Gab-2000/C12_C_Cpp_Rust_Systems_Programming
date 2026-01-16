// C++: abstraction via templates
#include <iostream>

template<typename T>
T max_t(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    std::cout << "max=" << max_t(3, 5) << "\n";
    return 0;
}

/* Templates provide strong type safety and zero-cost abstraction while avoiding macro pitfalls.
Errors are detected at compile time. */