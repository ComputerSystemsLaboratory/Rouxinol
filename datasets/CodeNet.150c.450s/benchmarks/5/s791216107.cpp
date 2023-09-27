#include <iostream>
#include <vector>
#include <algorithm>

int input()
{
    int value;
    std::cin>>value;
    return value;
}

int main()
{
    std::vector<int> vec;
    int n;
    std::cin >> n;
    for(int i = 0;i<n;++i)
        vec.push_back(input());
    std::reverse(vec.begin(),vec.end());
    for(auto i = 0;i < n;++i)
    {
        std::cout << vec[i] << (i==n-1?"":" ");
    }
    std::cout << std::endl;
    return 0;
}