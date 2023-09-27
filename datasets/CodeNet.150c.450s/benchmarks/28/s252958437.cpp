#include <cassert>
#include <cmath>
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

bool Check(const std::vector<int> Wi, int k, int P)
{
    int p = 0;
    --k;
    for(int i = 0; i < Wi.size(); ++i){
        if(P - p >= Wi[i]){
            p += Wi[i];
        }else{
            p = Wi[i];
            --k;
        }
    }
    return k >= 0;
}
int main()
{
    int n,k;
    std::cin >> n >> k;
    std::vector<int> Wi(n);
    for(int i = 0; i < n; ++i){
        std::cin >> Wi[i];
    }

    int MaxValue = *std::max_element(Wi.begin(), Wi.end());
    int MaxBad  = std::floor(std::accumulate(Wi.begin(), Wi.end(), 0) / k - 0.1);
    int MinGood = std::ceil(((double)n / k)) * MaxValue;
    while(MaxBad + 1 != MinGood){
        int P = (MaxBad + MinGood) / 2;
        if(MaxValue <= P && Check(Wi, k, P)){
            MinGood = P;
        }else{
            MaxBad = P;
        }
    }
    std::cout << MinGood << std::endl;
    return 0;
}