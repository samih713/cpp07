#include "WhatEver.hpp"
#include <iostream>
#include <string>

#define YELLOW "\001\033[1;93m\002" // yellow
#define BLUE   "\001\033[1;94m\002" // blue
#define RE     "\001\033[0;39m\002" // reset

using std::cerr;
using std::cout;
using std::endl;
using std::string;

// templates
template<typename T>
void swap(T &a, T &b)
{
    T temp(a);
    a = b;
    b = temp;
}

template<typename T>
T min(T &a, T &b)
{
    return (a < b ? a : b);
}

template<typename T>
T max(T &a, T &b)
{
    return (a > b ? a : b);
}

int main()
{
#if 0  // swap basic
    WhatEver a("samih");
    WhatEver b("kamal");

    cout << "a before swap: " << a << endl;
    cout << "b before swap: " << b << endl;
    swap<WhatEver>(a, b);
    cout << "...zzzzzSwaperino...!!!!" << endl;
    cout << "a after swap: " << a << endl;
    cout << "b after swbp: " << b << endl;
#endif // basic

#if 0  // swap comparison with actual swap

    WhatEver a("samih");
    WhatEver b("kamal");

    cerr << BLUE;
    std::swap<WhatEver>(a, b);
    cerr << YELLOW;
    swap<WhatEver>(a, b);
    cerr << RE;
#endif // swap comparison with actual swap

#if 1 // min comparison with actual min

    string a("samih");
    string b("kamal");

    cout << YELLOW;
    cout << std::min(a, b) << endl;
    cout << BLUE;
    cout << min(a, b) << endl;
#endif // min comparison with actual min

#if 0  // max comparison with actual max

    string a("samih");
    string b("kamal");

    cout << YELLOW;
    cout << std::max(a, b) << endl;
    cout << BLUE;
    cout << max(a, b) << endl;
#endif // max comparison with actual max

    return 0;
}
