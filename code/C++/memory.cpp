// C++: RAII and standard containers
#include <iostream>
#include <vector>

struct Resource {
    Resource() { std::cout << "acquire resource\n"; }
    ~Resource() { std::cout << "release resource\n"; }
};

int main() {
    Resource r; // automatically released at scope end

    std::vector<int> v;
    v.push_back(42);
    std::cout << "value=" << v[0] << "\n";

    return 0;
}

/* RAII ensures resources are released automatically and deterministically.
Memory safety improves without garbage collection. */