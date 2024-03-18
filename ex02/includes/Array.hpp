#include <cstddef>
#include <iostream>
#include <stdexcept>

using std::cerr;
using std::cout;
using std::endl;
using std::ostream;

#ifndef ARRAY_HPP
#define ARRAY_HPP

typedef unsigned int uint;

template<typename T>
class Array
{

    public:
        explicit Array(uint size = 0)
            : elements(new T[size])
            , _size(size){};
        ~Array()
        {
            delete[] elements;
        };
        Array(const Array &other)
        {
            this->_size = other.size();
            this->elements = new T[other.size()];
            for (uint i = 0; i < this->_size; i++)
                this->elements[i] = other[i];
        };
        Array &operator=(const Array &other)
        {
            if (other == this)
                return *this;
            delete[] this->elements;
            this->_size = other.size();
            this->elements = new T[other.size()];
            for (uint i = 0; i < this->_size; i++)
                this->elements[i] = other[i];
        }

        uint size() const
        {
            return _size;
        };
        // operator overload;
        T &operator[](uint i) const
        {
            if (i > _size)
                throw std::out_of_range("out of range");
            return elements[i];
        }

    private:
        T   *elements;
        uint _size;
};

template<typename T>
ostream &operator<<(ostream &os, const Array<T> &array)
{
    uint size = array.size();
    for (uint i = 0; i < size; i++)
        os << array[i] << endl;
    return os;
}

#endif // ARRAY_HPP
