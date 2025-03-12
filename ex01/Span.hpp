#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <exception>
#include <iostream>

class Span
{
    private :
        unsigned int        _size;
        std::vector<int>    _vec;
    
    public :
        Span();
        Span(unsigned int size);
        Span(const Span &other);
        Span    &operator=(const Span &other);
        ~Span();

        void    addNumber(int n);
        void    addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
        int     shortestSpan();
        int     longestSpan();

        class ContainerFullException : public std::exception
        {
            public :
                virtual const char *what() const throw();
        };

        class NotEnoughNumberException : public std::exception
        {
            public :
                virtual const char *what() const throw();
        };
};

#endif