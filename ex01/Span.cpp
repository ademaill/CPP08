#include "Span.hpp"

Span::Span() : _size(0) {}

Span::Span(unsigned int size) : _size(size) {}

Span::Span(const Span &other)
{
    *this = other;
}

Span &Span::operator=(const Span &other)
{
    if (this != &other)
    {
        _size = other._size;
        _vec = other._vec;
    }
    return (*this);
}

Span::~Span() {}

void    Span::addNumber(int n)
{
    if (_vec.size() >= _size)
        throw ContainerFullException();
    _vec.push_back(n);
}

void    Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    if(_vec.size() + std::distance(begin, end) > _size)
        throw ContainerFullException();
    _vec.insert(_vec.end(), begin, end);
}

int     Span::shortestSpan()
{
    if (_vec.size() <= 1)
        throw NotEnoughNumberException();
    std::vector<int> tmp = _vec;
    std::sort(tmp.begin(), tmp.end());
    int min = tmp[1] - tmp[0];
    for (unsigned int i = 1; i < tmp.size(); i++)
    {
        if (tmp[i] - tmp[i - 1] < min)
            min = tmp[i] - tmp[i - 1];
    }
    return min;
}

int     Span::longestSpan()
{
    if (_vec.size() <= 1)
        throw NotEnoughNumberException();
    std::vector<int> tmp = _vec;
    std::sort(tmp.begin(), tmp.end());
    return (tmp[tmp.size() - 1] - tmp[0]);
}

const char  *Span::ContainerFullException::what() const throw()
{
    return "Container is full";
}

const char  *Span::NotEnoughNumberException::what() const throw()
{
    return "Not enough numbers in container";
}