#include <iostream>
#include <algorithm>
#include <cmath>
#include <map>
#include <numeric>
#include <queue>
#include <string>
#include <vector>

int main(){
    int n;
    std::cin >> n;
    std::vector<int> num(100000);
    long long int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int a;
        std::cin >> a;
        sum += a;
        num[a]++;
    }

    int q = 0;
    std::cin >> q;
    for (int i = 0; i < q; i++)
    {
        int b, c;
        std::cin >> b >> c;
        sum += (c - b) * num[b];
        num[c] += num[b];
        num[b] = 0;
        std::cout << sum << std::endl;
    }

    return 0;
}