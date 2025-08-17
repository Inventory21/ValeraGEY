#include <iostream>
#include <cmath>
#include <iomanip>


int main() {
    double x, y;
    std::cout << " X    |    Y" << std::endl;
    std::cout << "-------------------" << std::endl;

    for (x = -1.5; x <= 1.5; x += 0.1) {
        if (x <= -1) 
        {y = 1;}
        else if (x <= 1) 
        {y = -x;} 
        else {y = -1;}
        std::cout << std::fixed << std::setprecision(1) << std::setw(6) << x << " | " << std::setw(6) << y << std::endl;
    }
return 0;
}