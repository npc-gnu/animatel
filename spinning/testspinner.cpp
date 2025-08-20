#include <iostream>
#include "spinner.hpp"
int main() {
    Spinner spinner(100); 
    spinner.start(400);
    std::cout << "\nSpinning ended!\n";
    return 0;
}
