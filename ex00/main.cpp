#include <iostream>
#include <vector>
#include <stdexcept>

template <typename T>
typename T::iterator easyfind(T container, int value)
{
    typename T::iterator it = std::find(container.begin(), container.end(), value);
    if (it == container.end())
        throw std::runtime_error("Value not found in container");
    return it;
}

// template <typename Container>
// void testContainer(Container& container, int value) {
//     try {
//         auto it = easyfind(container, value);
//         std::cout << "Value " << value << " found at index: " << std::distance(container.begin(), it) << std::endl;
//     } catch (const std::exception& e) {
//         std::cout << "Exception: " << e.what() << std::endl;
//     }
// }

int main()
{
    // std::cout<<ft<int><<std::endl;
    // std::vector<int> vec = {10, 20, 30, 40, 50};
    int vec[] = {10, 20, 30, 40, 50};

    std::vector<int>::iterator it = easyfind(vec, 20);
    std::cout<<*it<<std::endl;
    // testContainer(vec, 30); // Testing with value present in the vector
    // testContainer(vec, 55); // Testing with value not present in the vector

    return 0;
}
