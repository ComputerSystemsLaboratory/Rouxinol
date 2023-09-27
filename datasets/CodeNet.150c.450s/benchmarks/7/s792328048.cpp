#include <iostream>
#include <algorithm>
#include <vector>

int main()
{

        std::vector<int> vec;
        int a;

        for(int i = 0; i < 10; ++i)
        {
                std::cin >> a;
                vec.push_back(a);
        }

        std::sort(vec.begin(),vec.end());

        for(int i = 0; i < 3; ++i) std::cout << vec.at(9-i) << std::endl;

        return 0;
}