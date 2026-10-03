#include <iostream>
int main() {
    int a = 100;
    int b = -50;
    int c = 0144;
    int d = 0777;
    int e = 0x64;
    int f = 0xFF;
    int g = 0b1100100;
    unsigned int h = 100U;
    long i = 100L;
    unsigned long j = 100UL;
    long long k = 100LL;
    unsigned long long l = 100ULL;
    unsigned long long m = 0xA0ULL;
    std::cout << a << " " << b << std::endl;
    std::cout << c << " " << d << std::endl;
    std::cout << e << " " << f << std::endl;
    std::cout << g << std::endl;
    std::cout << h << " " << i << " " << j << " " << k << " " << l << std::endl;
    std::cout << m << std::endl;
}