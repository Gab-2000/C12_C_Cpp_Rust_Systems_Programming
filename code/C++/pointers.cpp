#include <iostream>
#include <vector>
#include <memory>

int main() {
    std::vector<int> v = {10, 20, 30};

    // Low-level pointer access is still possible
    int* p = &v[0];
    std::cout << *p << "\n";

    // Safer access using bounds-checked method
    std::cout << v.at(1) << "\n";

    /* -----------------------------
     * Fixing ownership with RAII
     * ----------------------------- */

    // Raw pointer (problematic ownership)
    // int* raw = new int(42);        // ❌ must remember to delete

    // Smart pointer (RAII)
    std::unique_ptr<int> safe = std::make_unique<int>(42);
    std::cout << *safe << "\n";      // automatically freed

    return 0;
}
// C++ provides safer abstractions like vectors with bounds checking and smart pointers for automatic memory management, reducing risks of pointer misuse.