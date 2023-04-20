#include <iostream>

std::string convert(int n) {
    
}

int main() {
    int n;
    do {
        std::cout << "Enter number: ";
        std::cin >> n; 
    } while (n <= 0 || n > 2147483647);
    std::cout << convert(n);
    return 0;
}