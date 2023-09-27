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
    std::vector<int> A(n+1);
    for(int i = 0; i < n; ++i){
        std::cin >> A[i];
    }
    A[n] = -1;
    
    int q;
    std::cin >> q;
    for(int i = 0; i < q; ++i){
        int m;
        std::cin >> m;
        std::cout << (Check(A.begin(), m) ? "yes" : "no") << std::endl;
    }
    
    return 0;
}