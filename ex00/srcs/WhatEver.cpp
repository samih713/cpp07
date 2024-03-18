#include "WhatEver.hpp"

int WhatEver::_order = 0;

WhatEver::WhatEver(const string &name)
    : name(name)
    , order(_order)
{
    _order++;
    DEBUG_PRINT("constructor");
}

WhatEver::~WhatEver()
{
    DEBUG_PRINT("destructor");
}

WhatEver::WhatEver(const WhatEver &other)
    : name(other.name)
    , order(_order)
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
#if defined(DEBUG)
    os << " [ Whatever no: " << it.get_order() << " ]";
#endif
    return os;
}

// comparision
bool WhatEver::operator>(const WhatEver &other) const
{
    return (name > other.name);
}
bool WhatEver::operator>=(const WhatEver &other) const
{
    return (name >= other.name);
}
bool WhatEver::operator<(const WhatEver &other) const
{
    return (name < other.name);
}
bool WhatEver::operator<=(const WhatEver &other) const
{
    return (name <= other.name);
}
bool WhatEver::operator==(const WhatEver &other) const
{
    return (name == other.name);
}
