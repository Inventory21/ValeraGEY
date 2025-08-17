#include <iostream>
#include <cmath>
#include <iomanip>

int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    double s = 0.0;
    for (int n = 1; n <= 6; ++n) {
        double term = (pow(-1, n) * pow(5, n)) / factorial(n);
        s += term;
    }
    std::cout << "S is: " << s << std::endl;
return 0;
}