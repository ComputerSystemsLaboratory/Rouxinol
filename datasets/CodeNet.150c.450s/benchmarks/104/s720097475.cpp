#include <iostream>
#include <vector>
#include <functional>

int main()
{
    int w;
    std::cin >> w;
    std::vector<int> v(w);
    for(int i = 0; i < w; ++i){
        v[i] = i+1;
    }
    int n;
    std::cin >> n;
    for(int i = 0; i < n; ++i){
        int a, b;
        char c;
        std::cin >> a >> c >>  b;
        std::swap(v[a-1], v[b-1]);
    }
    for(int i = 0; i < w; ++i){
        std::cout << v[i] << std::endl;
    }
    return 0;
}