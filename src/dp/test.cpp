#include <iostream>
#include <dp/fibo.cpp>
#include <dp/lcs.cpp>

int main()
{
    std::string s1("AGGTAB");
    std::string s2("GXTXAYB");
    int b = lcs(s1, s2);
    std::cout << fibo<2>::val << '\n';
    std::cout << b << std::endl;
}
