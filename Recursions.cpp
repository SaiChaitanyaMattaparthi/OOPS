#include <iostream>
void printNumbers(int n) {
    if (n <= 10) {
        std::cout << n << " ";
        printNumbers(n+1);
    }
}
void printNumbers1(int n) {
    if (n>=0) {
        std::cout << n << " ";
        printNumbers1(n-1);
    }
}

int main() {
    printNumbers(1);
    std::cout << std::endl;
     printNumbers1(10);
     std::cout << std::endl;
    return 0;
}
