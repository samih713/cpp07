#include "WhatEver.hpp"
#include <iostream>
#include <string>

#define YELLOW "\001\033[1;93m\002" // yellow
#define GREEN  "\001\033[1;92m\002" // green
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
const T &min(const T &a, const T &b)
{
    return (a < b ? a : b);
}

template<typename T>
const T &max(const T &a, const T &b)
{
    return (a > b ? a : b);
}

int main()
{

#if 0 // checking how it works with const

    cout << GREEN;
    WhatEver a("samih");
    WhatEver b("samih");
    // value to assign to
    WhatEver c("xxxxx");

    cout << YELLOW;
    c = std::min(a, b);
    cout << BLUE;
    c = min(a, b);
    cout << RE;

#endif // min comparison with actual min

#if 1 // swap (can't swap consts)
    WhatEver a("samih");
    WhatEver b("kamal");

    cout << YELLOW;
    cout << "a before swap: " << a << endl;
    cout << "b before swap: " << b << endl;
    cout << GREEN;
    swap<WhatEver>(a, b);
    cout << BLUE;
    cout << "...zzzzzSwaperino...!!!!" << endl;
    cout << "a after swap: " << a << endl;
    cout << "b after swbp: " << b << endl;
    cout << RE;
#endif // basic

#if 0  // swap (can't swap consts)
    const WhatEver a("samih");
    const WhatEver b("kamal");

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

#if 0  // min comparison with actual min

    WhatEver a("samih");
    WhatEver b("kamal");

    cout << YELLOW;
    cout << std::min(a, b) << endl;
    cout << BLUE;
    cout << min(a, b) << endl;
    cout << RE;
#endif // min comparison with actual min

#if 0  // min comparison if they are equal
       // should return second one
    cout << GREEN;
    WhatEver a("samih");
    WhatEver b("samih");

    cout << YELLOW;
    cout << std::min(a, b) << endl;
    cout << BLUE;
    cout << min(a, b) << endl;
    cout << RE;
#endif // min comparison with actual min

#if 0  // max comparison with actual max

    string a("samih");
    string b("kamal");

    cout << YELLOW;
    cout << std::max(a, b) << endl;
    cout << BLUE;
    cout << max(a, b) << endl;
    cout << RE;
#endif // max comparison with actual max

    return 0;
}
