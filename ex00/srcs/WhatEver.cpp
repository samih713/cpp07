#include "WhatEver.hpp"

WhatEver::WhatEver(const string &name)
    : name(name)
{
    DEBUG_PRINT("constructor");
}

WhatEver::~WhatEver()
{
    DEBUG_PRINT("destructor");
}

WhatEver::WhatEver(const WhatEver &other)
    : name(other.name)
{
    DEBUG_PRINT("copy constructor");
}

WhatEver &WhatEver::operator=(const WhatEver &other)
{
    name = other.name;
    DEBUG_PRINT("copy assignment");
    return *this;
}

ostream &operator<<(ostream &os, const WhatEver &it)
{
    os << it.get_name();
    return os;
}
