#include "Array.hpp"
#include <iostream>

template<typename T>
void populate(const Array<T> &array, T things)
{
    uint size = array.size();
    for (uint i = 0; i < size; i++)
        array[i] = things;
}

int main()
{
    Array<int> a = Array<int>(9);
    populate(a, 45);
    cout << a;
    return 0;
}
