#include <iostream>
#include <vector>

struct Resource {
    Resource() { std::cout << "acquire resource\n"; } // constructor
    ~Resource() { std::cout << "release resource\n"; } // destructor
};

int main() {
    // ✅ RAII: automatic deterministic cleanup
    Resource r;

    std::vector<int> v;
    v.push_back(42);
    std::cout << "value=" << v[0] << "\n";

    // ⚠️ Still possible in C++: dangling pointer (use-after-free)
    int* p = new int(5);
    delete p;        // freed
    *p = 10;         // ❌ undefined behavior (dangling pointer)

    return 0;
}
