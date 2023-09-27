#include <cmath>
#include <iostream>
#include <algorithm>
#include <vector>

bool Check(const std::vector<int>::const_iterator It, int m)
{
    if(m == 0) return true;
    if(m <  0) return false;
    if(*It == -1) return false;
    return
        Check(It+1, m - *It) ||
        Check(It+1, m);
}

int main()
{
    std::cin.tie(0);
    std::ios::sync_with_stdio(false);
    int n;
    std::cin >> n;
    std::vector<int> A;
    A.reserve(std::pow(2, n));
    for(int i = 0; i < n; ++i){
        int a;
        std::cin >> a;
        int size = A.size();
        for(int j = 0; j < size; ++j){
            A.push_back(A[j] + a);
        }
        A.push_back(a);
    }
    std::sort(A.begin(), A.end());
    
    int q;
    std::cin >> q;
    for(int i = 0; i < q; ++i){
        int m;
        std::cin >> m;
        std::cout << (std::binary_search(A.begin(), A.end(), m) ? "yes" : "no") << std::endl;
    }
    
    return 0;
}