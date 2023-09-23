#include <iostream>
//#include <algorithm>

static const int MAX_PROFIT = -2000000000;
static const int MAX_NUM = 200000;

int main(int argc, char const *argv[])
{
    int R[MAX_NUM], n;

    std::cin >> n;
    
    for(int i = 0;i < n;i++) std::cin >> R[i];

    int maxv = MAX_PROFIT;
    int minv = R[0];

    for(int i = 1;i < n;i++){
        maxv = std::max(maxv,R[i] - minv);
        minv = std::min(minv,R[i]);
    }

    std::cout << maxv << std::endl;

    return 0;
}

