#ifndef ITER_HPP
#define ITER_HPP

#define BOLD "\033[1m"
#define UNDERLINE "\033[4m"
#define RESET "\033[0m"

#define BLUE "\033[34m"
#define GREEN "\033[32m"

#define BG "\033[40m"

#include <iostream>

template<typename T, typename Func>
void iter(T *arr, const size_t size, Func func)
{
    for(size_t i = 0; i < size; ++i)
    {
        func(arr[i]);
    }
}

#endif