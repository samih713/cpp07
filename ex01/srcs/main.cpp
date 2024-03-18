#include "Iter.hpp"
#include <iostream>
#include <stdexcept>

using std::cerr;
using std::cout;
using std::endl;

void square(int x)
{
    cout << "processing .... " << x << endl;
    x += 2;
}

int main()
{
    int arr[] = { 1, 2, 3, 4, 5 }; // here the compiler knows how big the array is

    try
    {
        iter(arr, 1000000000000000000, square);
    }
    catch (std::out_of_range &ooe)
    {
        cout << ooe.what() << endl;
    }
}
