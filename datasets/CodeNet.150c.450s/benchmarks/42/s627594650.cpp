#include <iostream>
#include <vector>
#include <string>
#include <tuple>

std::vector<std::tuple<std::string, int>> round_robin(std::vector<std::tuple<std::string, int>> ary, int q) {
    int element_num = ary.size();
    int elapsed_time = 0;
    std::vector<std::tuple<std::string, int>> result;
    result.reserve(ary.size());
    while(element_num) {
        int n = element_num;
        element_num = 0;
        for(int i = 0; i < n; i++) {
            int& rest = std::get<1>(ary[i]);
            if(rest) {
                if(rest > q) {
                    rest -= q;
                    elapsed_time += q;
                    ary[element_num++] = std::tuple<std::string, int>(std::get<0>(ary[i]), rest);
                } else {
                    elapsed_time += rest;
                    rest = 0;
                    result.push_back(std::tuple<std::string, int>(std::get<0>(ary[i]), elapsed_time));
                }
            }
        }
    }
    return result;
}


int main(int argc, char const* argv[])
{
    int n, q;
    scanf("%d %d", &n, &q);
    std::vector<std::tuple<std::string, int>> ary(n);
    for(auto& i: ary) {
        std::cin >> std::get<0>(i);
        std::cin >> std::get<1>(i);
    }
    auto result = round_robin(ary, q);
    for(int i = 0; i < result.size() - 1; i++) {
        std::cout << std::get<0>(result[i]) << " ";
        std::cout << std::get<1>(result[i]) << std::endl;
    }
    std::cout << std::get<0>(result[result.size()-1]) << " ";
    std::cout << std::get<1>(result[result.size()-1]) << std::endl;
    return 0;
}