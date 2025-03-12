#include "Span.hpp"
#include <cstdlib>

int main()
{
    std::cout << "Test vector container" << std::endl;
    Span sp = Span(5);
    sp.addNumber(5);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    try
    {
        sp.addNumber(11);
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        std::cout << "Shortest span : " << sp.shortestSpan() << std::endl;
        std::cout << "Longest span : " << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    
    std::cout << "Test vector range" << std::endl;
    Span sp2 = Span(100);
    std::vector<int> v;
    std::srand(time(NULL));
    for (int i = 0; i < 100; i++)
    {
        int random = rand() % 1000000;
        v.push_back(random);
    }
    try
    {
        sp2.addNumber(v.begin(), v.end());
        std::cout << "Shortest span : " << sp2.shortestSpan() << std::endl;
        std::cout << "Longest span : " << sp2.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "Test vector large range" << std::endl;
    Span sp3 = Span(100000);
    std::vector<int> v2;
    std::srand(time(NULL));
    for (int i = 0; i < 100000; i++)
    {
        int random_int = rand() % 1000000000;
        v2.push_back(random_int);
    }
    try
    {
        sp3.addNumber(v2.begin(), v2.end());
        std::cout << "Shortest span : " << sp3.shortestSpan() << std::endl;
        std::cout << "Longest span : " << sp3.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
}