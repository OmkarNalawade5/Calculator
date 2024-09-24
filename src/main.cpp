#include <iostream>
#include "Calculator.h"
 
int main() {
    Calculator calc;
    int result = calc.add(6, 8);
    std::cout << "The result of addition is: " << result << std::endl;
    return 0;
}
