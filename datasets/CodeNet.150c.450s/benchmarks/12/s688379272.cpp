#include <cassert>
#include <iostream>
#include <vector>

int main()
{
    std::cin.tie(0);
    std::ios::sync_with_stdio(false);
    int H;
    std::cin >> H;
    std::vector<int> A(H+1);
    for(std::size_t i = 1; i <= H; ++i){
        int Value;
        std::cin >> Value;
        A[i] = Value;
    }
    for(std::size_t i = 1; i <= H; ++i){
        // node 2: key = 8, parent key = 7, left key = 2, right key = 3,
        int Parent = i/2;
        int Left   = i * 2;
        int Right  = i * 2 + 1;
        std::cout << "node " << i << ": key = " << A[i] << ", ";
        if(Parent)     std::cout << "parent key = " << A[Parent] << ", ";
        if(Left <= H)  std::cout << "left key = "   << A[Left]   << ", ";
        if(Right <= H) std::cout << "right key = "  << A[Right]  << ", ";
        std::cout << std::endl;
    }
    return 0;
}