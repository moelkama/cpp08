#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <algorithm>
#include <iostream>
#include <cstdlib>
class Span
{
private:
    std::vector<int>    tab;
    unsigned int        size;
    unsigned int        shor_t;
public:
    Span();
    Span(unsigned int N);
    Span(const Span& other);
    Span& operator=(const Span& other);
    void    addNumber(int val);
    unsigned int    longestSpan();
    unsigned int    shortestSpan();
};

#endif