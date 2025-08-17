#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    double x, s = 0.0;

    std::cout << "what is x: ";
    std::cin >> x;

    for (int i = 0; i <= 10; ++i) {
        s += 1 / pow(x, i);
    }
    std::cout << "s: " << s << std::endl;
return 0;
}