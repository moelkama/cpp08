#include "Span.hpp"

Span::Span()
{
    this->size = 0;
}

Span::Span(unsigned int N)
{
    this->size = N;
}

Span::Span(const Span& other)
{
    *this = other;
}

Span& Span::operator=(const Span& other)
{
    this->size = other.size;
    this->tab = other.tab;
    return (*this);
}

void    Span::addNumber(int val)
{
    if (this->tab.size() >= size)
        throw std::out_of_range("Span::addNumber : Span is already FULL!");
    if (this->tab.size() == 2)
    {
        this->tab.push_back(val);
        this->shor_t = labs((long )*(this->tab.end() - 1) - *this->tab.begin());
        return ;
    }
    for (unsigned int i = 0; i < this->tab.size(); i++)
    {
        if ((unsigned int )labs((long)this->tab[i] - val) < this->shor_t)
            this->shor_t = labs((long)this->tab[i] - val);
    }
    this->tab.push_back(val);
}

unsigned int    Span::longestSpan()
{
    if (this->tab.size() <= 1)
        throw std::runtime_error("Span::longestSpan : Span don't have at least two numbers!");
    return ((unsigned int)*std::max_element(this->tab.begin(), this->tab.end()) - *std::min_element(this->tab.begin(), this->tab.end()));
}

unsigned int    Span::shortestSpan()
{
    if (this->tab.size() <= 1)
        throw std::runtime_error("Span::shortestSpan : Span don't have at least two numbers!");
    return (this->shor_t);
}