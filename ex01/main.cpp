#include "Span.hpp"
#include <iostream>

int main(void)
{
    try
    {
        Span sp = Span(5);
    
        sp.addNumber(4);
        sp.addNumber(3);
        sp.addNumber(17);
        // sp.addNumber(9);
        // sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout<<"exeption : "<<e.what()<<std::endl;
    }
}