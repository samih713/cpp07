#include <cstddef>
#include <exception>
#include <stdexcept>

#define RED "\001\033[1;91m\002" // red
#define RE  "\001\033[0;39m\002" // reset

#ifndef ITER_HPP // TPP
#define ITER_HPP // TPP

#define array_length(arr) (sizeof(arr) / sizeof(arr[0]))

template<typename T, size_t N, typename f>
void iter(T (&array)[N], size_t length, f func)
{
    if (length > N)
        throw std::out_of_range(RED "Invalid length" RE);

    for (size_t i = 0; i < length; i++)
        func(array[i]);
}


#endif // ITER_HPP // TPP
