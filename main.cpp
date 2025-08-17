#include <iostream>
#include <cmath>

int main() {
    int s = 0, i;
    for (i = 2; i <= 35; i = i + 3){
    s = s + i; 
    }
 
    std::cout << "s = " << s << std::endl;

return 0;
}