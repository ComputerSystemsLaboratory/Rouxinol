#include<iostream>
#include<array>
#include<algorithm>
#include<cmath>

int main()
{
    std::array<int,3> input;
    int N;
    for(std::cin >> N; N > 0; --N)
    {
        std::cin >> input[0] >> input[1] >> input[2];
        std::sort(begin(input),end(input));
        if(input[2] == hypot(input[1],input[0]))
        {
            std::cout << "YES" << std::endl;
        }
        else
        {
            std::cout << "NO" << std::endl;
        }
    }
    return 0;
}