#include <iostream>

int fib(int n) {
    if (n <= 0) return 0;
    if (n == 1 || n == 2) return 1;
    return fib(n - 1) + fib(n - 2);
}

int main() {
    int n = 40; 
    std::cout << "Fibonacci of " << n << " is " << fib(n) << std::endl;
    return 0;
}
