#include <iostream>
#include <cmath>

int main() {
double s = 0.0;
    double x;

    std::cout << "What is X :";
    std::cin >> x;

    for (int i = 1; i <= 9; ++i) {
        s += cos(i * x) / pow(x, i - 1);
    }

    std::cout << "s = " << s << std::endl;
return 0;
}