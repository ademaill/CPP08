#include "easyfind.hpp"
#include <vector>
#include <list>
#include <deque>


void    test_list()
{
    std::cout << "___testing list___" << std::endl;
    std::list<int> l;
    l.push_back(1);
    l.push_back(2);

    try
    {
        std::cout << *easyfind(l, 1) << std::endl;
        std::cout << *easyfind(l, 2) << std::endl;
        std::cout << *easyfind(l, 3) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
}

void    test_deque()
{
    std::cout << "___testing deque___" << std::endl;
    std::deque<int> d;
    d.push_back(1);
    d.push_back(2);

    try
    {
        std::cout << *easyfind(d, 1) << std::endl;
        std::cout << *easyfind(d, 2) << std::endl;
        std::cout << *easyfind(d, 3) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
}

void    test_vector()
{
    std::cout << "___testing vector___" << std::endl;
    std::vector<int> v;
    v.push_back(1);
    v.push_back(2);

    try
    {
        std::cout << *easyfind(v, 1) << std::endl;
        std::cout << *easyfind(v, 2) << std::endl;
        std::cout << *easyfind(v, 3) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
}

int main()
{
    test_list();
    test_deque();
    test_vector();
    return 0;
}