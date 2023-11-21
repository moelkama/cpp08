#include "MutantStack.hpp"
#include <iostream>

int main(void)
{
    MutantStack<int> var;
    var.push(5);
    var.push(17);
    MutantStack<int>::iterator  it = var.begin();
    MutantStack<int>::iterator  ite = var.end();
    // MutantStack<int>::const_iterator  cit = var.cbegin();
    // MutantStack<int>::reverse_iterator  rit = var.rbegin();
    // MutantStack<int>::const_reverse_iterator  crit = var.crbegin();
    // (void)it;
    // (void)cit;
    // (void)rit;
    // (void)crit;
    // std::cout << mstack.top() << std::endl;
    // mstack.pop();
    // std::cout << mstack.size() << std::endl;
    // mstack.push(3);
    // mstack.push(5);
    // mstack.push(737);
    // mstack.push(0);
    // MutantStack<int>::iterator it = mstack.begin();
    // MutantStack<int>::iterator ite = mstack.end();
    // ++it;
    // --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    // std::stack<int> s(mstack);
    // return 0;
}