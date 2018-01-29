#include <iostream>
#include <vector>

int fibo(int n)
{
    std::vector<int> fib;
    fib.resize(n + 1);
    fib.at(0) = 0;
    fib.at(1) = 1;

    for(unsigned int i = 2; i <= n; ++i){
        fib.at(i) = fib.at(i-1) + fib.at(i-2);
    }
    return fib.at(n);
}
