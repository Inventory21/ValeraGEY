#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    int base = 3;
    int exponent = 7;
    int result = 1; 
    for (int i = 1; i <= exponent; ++i) {
        result *= base;
    }
    std::cout << "3 in 7-s exponent: " << result << std::endl;
return 0;
}