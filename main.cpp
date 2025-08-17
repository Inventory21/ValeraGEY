#include <iostream>
#include <cmath>

int main() {
    double s = 0.0;
    for (int i = 1; i <= 10; ++i){
    s += 1.0 / i; 
    }
 
    std::cout << "s = " << s << std::endl;

return 0;
}