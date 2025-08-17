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
    int s = 0;
    for (int i = 1; i <= 6; ++i) {
        s += factorial(i);

    std::cout << "Farcorials 1 to 6 : " << s << std::endl;
    }
return 0;
}