#include <iostream>

// C++ abstraction: templates (type-checked at compile time)
template <typename T>
T max_t(T a, T b) {
    return (a > b) ? a : b;
}
int main() {
    // ✅ Safe abstraction: no macro expansion, no double evaluation
    int x = 10, y = 5;
    int r = max_t(++x, y);   // ++x evaluated once
    std::cout << "x=" << x << ", result=" << r << "\n";

    // ⚠️ Still allowed in C++: raw pointer misuse
    int* p = new int(5);
    delete p;        // memory freed
    *p = 10;         // ❌ dangling pointer (undefined behavior)

    return 0;
}
