// C++: safer access using containers
#include <iostream>
#include <vector>

int main() {
    std::vector<int> v = {10, 20, 30};

    int* p = &v[0]; // still possible
    std::cout << *p << "\n";

    std::cout << v.at(1) << "\n"; // bounds-checked access

    return 0;
}

/* C++ allows low-level pointer access but also offers safer abstractions when desired. */