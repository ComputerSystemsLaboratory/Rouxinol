#include <iostream>
#include <algorithm>
#include <vector>

bool Check(const std::vector<int>& A, int m, int i, int v)
{
    if(v == m) return true;
    if(v >  m) return false;
    for(i; i < A.size(); ++i){
        if(Check(A, m, i+1, v + A[i])){
            return true;
        }
    }
    return false;
}

int main()
{
    int n;
    std::cin >> n;
    std::vector<int> A(n);
    for(int i = 0; i < n; ++i){
        std::cin >> A[i];
    }
    
    int q;
    std::cin >> q;
    for(int i = 0; i < q; ++i){
        int m;
        std::cin >> m;
        std::cout << (Check(A, m, 0, 0) ? "yes" : "no") << std::endl;
    }
    
    return 0;
}