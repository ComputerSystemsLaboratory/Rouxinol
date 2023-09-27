#include <iostream>
#include <vector>

struct Node
{
    int key, parent, left_key, right_key;
};

int main()
{
    int n;
    std::cin >> n;
    std::vector<int> vec(n + 1);
    for (size_t i = 1; i < n + 1; i++)
    {
        std::cin >> vec.at(i);
    }
    for (size_t i = 1; i < n + 1; i++)
    {
        std::cout << "node " << i << ": "
                  << "key = " << vec.at(i) << ", ";
        if (i / 2 > 0)
        {
            std::cout << "parent key = " << vec.at(i / 2) << ", ";
        }
        if (2 * i < n + 1)
        {
            std::cout << "left key = " << vec.at(2 * i) << ", ";
        }
        if (2 * i + 1 < n + 1)
        {
            std::cout << "right key = " << vec.at(2 * i + 1) << ", ";
        }
        std::cout << std::endl ;
    }
}
