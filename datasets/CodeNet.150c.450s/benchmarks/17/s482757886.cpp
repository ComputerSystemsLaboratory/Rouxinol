#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    std::vector<int> Numbers;
    for(std::size_t i = 0; i < 5; ++i){
        int n;
        std::cin >> n;
        Numbers.push_back(n);
    }
    std::sort(Numbers.begin(), Numbers.end(), std::greater<int>());
    for(std::size_t i = 0; i < Numbers.size(); ++i){
        if(i) std::cout << " ";
        std::cout << Numbers[i];
    }
    std::cout << std::endl;
    return 0;
}