#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>

template <typename T, class C = std::deque<T>>
class MutantStack : public std::stack<T, C>
{
public:
    MutantStack() : std::stack<T, C>(){}
    MutantStack(const MutantStack& other) : std::stack<T, C>(other){*this = other;}
    MutantStack& operator=(const MutantStack& other){this->std::stack<T, C>::operator=(other);}
    ~MutantStack(){}

    typedef typename C::iterator                iterator;
    typedef typename C::reverse_iterator        reverse_iterator;
    typedef typename C::const_reverse_iterator  const_reverse_iterator;
    typedef typename C::const_iterator          const_iterator;

    iterator begin()
    {
        return this->c.begin();
    }
    iterator end()
    {
        return this->c.end();
    }
    const_iterator cbegin() const
    {
        return this->c.cbegin();
    }
    const_iterator cend() const
    {
        return this->c.cend();
    }

    reverse_iterator rbegin()
    {
        return this->c.rbegin();
    }
    reverse_iterator rend()
    {
        return this->c.rend();
    }
    const_reverse_iterator crbegin() const
    {
        return this->c.cbegin();
    }
    const_reverse_iterator crend() const
    {
        return this->c.crend();
    }
};

#endif