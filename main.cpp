#include <iostream>
#include <cmath>

int main() {
 double s = 0.0;
    int i;
    for (i = 1; i <= 56; ++i) {
        s += (2.0 * i) / (2.0 * i + 1);
    }

    std::cout << "s = " << s << std::endl;

return 0;
}