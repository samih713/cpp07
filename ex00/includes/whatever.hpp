#ifndef whatever_hpp
#define whatever_hpp

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

#endif // whatever_hpp
