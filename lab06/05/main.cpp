#include <iostream>
#include <string>

namespace Geometry {
    const double Pi = 3.141592653589793;

    double area(double r) {
        return Pi * r * r;
    }

    std::string name() {
        return "Geometry";
    }
}

namespace Finance {
    double area(double width, double height) {
        return width * height;
    }

    double percent(double sum, double rate) {
        return sum * rate / 100;
    }

    std::string name() {
        return "Finance";
    }

    namespace Tax {
        const double Rate = 13.0;

        double calc(double income) {
            return percent(income, Rate);
        }
    }
}

int main() {
    std::cout << Geometry::name() << ": area(2) = "
              << Geometry::area(2) << std::endl;

    std::cout << Finance::name() << ": area(3, 4) = "
              << Finance::area(3, 4) << std::endl;

    std::cout << "Tax from 50000 = "
              << Finance::Tax::calc(50000) << std::endl;

    namespace FT = Finance::Tax;
    std::cout << "Tax rate = " << FT::Rate << "%" << std::endl;

    using Geometry::Pi;
    std::cout << "Pi = " << Pi << std::endl;

    return 0;
}
