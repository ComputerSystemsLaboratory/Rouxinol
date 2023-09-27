#include <iostream>
#include <algorithm>
#include <vector>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    std::vector<int> input(3);
    for(auto& i : input){
        std::cin >> i;
    }
    std::sort(input.begin(), input.end());
    for(int i=0; i<3; ++i){
        std::cout << input[i] << ((i!=2)?" ":"\n");
    }
    return 0;
}