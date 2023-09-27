#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    std::vector<int> input;
    for(int i = 0; i < 3; ++i){
        int in;
        std::cin >> in;
        input.push_back(in);
    }
    std::sort(input.begin(), input.end());

    for(int i = 0; i < 3; ++i){
        std::cout << input[i];
        if(i < 2) std::cout << " ";
        else std::cout << std::endl;
    }
    return 0;
}