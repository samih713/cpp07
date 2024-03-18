#include <iostream>
#include <string>

using std::cerr;
using std::endl;
using std::ostream;
using std::string;

#ifndef WHATEVER
#define WHATEVER

#if defined(DEBUG)
#define DEBUG_PRINT(message) (cerr << (message) << endl)
#else
#define DEBUG_PRINT(message)
#endif // DEBUG

class WhatEver
{

    public:
        WhatEver(const string &name);
        ~WhatEver();
        WhatEver(const WhatEver &other);
        WhatEver     &operator=(const WhatEver &);
        const string &get_name() const
        {
            return name;
        }
        const int &get_order() const
        {
            return order;
        }
        // comparision
        bool operator>(const WhatEver &other) const;
        bool operator>=(const WhatEver &other) const;
        bool operator<(const WhatEver &other) const;
        bool operator<=(const WhatEver &other) const;
        bool operator==(const WhatEver &other) const;

    private:
        string     name;
        static int _order;
        const int  order;
};

ostream &operator<<(ostream &os, const WhatEver &it);

#endif // WHATEVER_HPP
