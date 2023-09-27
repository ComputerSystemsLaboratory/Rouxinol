#include <cassert>
#include <cmath>
#include <iostream>
#include <vector>
#include <algorithm>

int solve(std::istream& in, int n)
{
    std::vector<int> all(n);
    std::vector<int> koho;
    int temp = 0;
    int max = 0;
    for(int i = 0; i < n; ++i) {
        in >> all[i];
        if(temp && all[i] < 0){
            koho.push_back(temp);
            if(temp + all[i] < 0){
                temp = 0;
            }else{
                temp += all[i];
            }
        }else
        if(all[i] > 0){
            temp += all[i];
        }
    }
    if(temp) koho.push_back(temp);
    if(koho.empty()) return *std::max_element(all.begin(), all.end());
    return *std::max_element(koho.begin(), koho.end());
}
int main()
{
    int n;
    std::cin >> n;
    while(n){
        std::cout << solve(std::cin, n) << std::endl;
        std::cin >> n;
    }
    return 0;
}