// Based on Jason Tuner's version : https://www.youtube.com/watch?v=hErD6WGqPlA
#include <iostream>
#include <vector>

template<int T>
struct fibo{
    static const int val = fibo<T-1>::val + fibo<T-2>::val;
};

template<>
struct fibo<0>
{
    static const int val = 0;
};

template<>
struct fibo<1>
{
    static const int val = 1;
};
