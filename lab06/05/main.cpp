#include <iostream>

namespace first {
    int x = 10;

    void print() {
        std::cout << "first: " << x << std::endl;
    }
}

namespace second {
    int x = 20;

    void print() {
        std::cout << "second: " << x << std::endl;
    }
}

int main() {
    first::print();
    second::print();
    std::cout << first::x + second::x << std::endl;
    return 0;
}
