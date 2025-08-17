#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    double x, y;

    std::cout << "   x      |    y(x)" << std::endl;
    std::cout << "------------------------" << std::endl;

    for (x = -4.0; x <= 4.0; x += 0.5) {
        y = 0.5 * x * x - 7 * x;
        std::cout << std::fixed << std::setprecision(1) << std::setw(7) << x << " | " << std::setw(7) << y << std::endl;
    }
return 0;
}