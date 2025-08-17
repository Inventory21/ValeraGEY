#include <iostream>
#include <cmath>

int main() {
double s = 0.0;
    double p, h;
    std::cout << "what is p: ";
    std::cin >> p;
    std::cout << "what is h: ";
    std::cin >> h;
    for (int i = 0; i < 10; ++i) {
        double term = p + i * h;
        s += term * term;
  }
    std::cout << "REZULTAT :" << s << std::endl;
return 0;
}