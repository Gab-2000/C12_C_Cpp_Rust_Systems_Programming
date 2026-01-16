// C++: error handling via exceptions
#include <iostream>
#include <stdexcept>

int parse_positive(int x) {
    if (x <= 0)
        throw std::runtime_error("input must be positive");
    return x;
}

int main() {
    try {
        int v = parse_positive(-3);
        std::cout << "ok: " << v << "\n";
    } catch (const std::exception& e) {
        std::cout << "Error: " << e.what() << "\n";
        return 1;
    }
    return 0;
}
/*Exceptions separate normal logic from error handling but may introduce runtime overhead and complexity.*/