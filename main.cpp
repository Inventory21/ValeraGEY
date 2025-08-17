#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    int n = 6;
    int factorial = 1;
    for (int i = 1; i <= n; ++i) {
        factorial *= i;
    }

    std::cout << "Factorial " << n << " is " << factorial << std::endl;
return 0;
}