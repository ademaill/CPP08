#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>

class ValueException : public std::exception
{
    public :
        virtual const char *what() const throw()
            {
                return "Value not found";
            }
};

template <typename T>
typename T::iterator    easyfind(T &container, int value)
{
    typename T::iterator it = std::find(container.begin(), container.end(), value);
    if (it == container.end())
        throw ValueException();
    return (it);
}

#endif