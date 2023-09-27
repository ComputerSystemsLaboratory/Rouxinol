#include <iostream>
#include <vector>
#include <algorithm>

typedef std::vector<int> TList;
void CountingSort(const TList& A, TList& B, int k)
{
    std::vector<int> C(k+1, 0);
    
    /* C[i] ??? i ???????????°????¨?????????? */
    for(int j = 0; j < A.size(); ++j){
        C[A[j]]++;
    }
    
    /* C[i] ??? i ??\????????°???????????°????¨??????????*/
    for(int i = 1; i <= k; ++i){
        C[i] = C[i] + C[i-1];
    }
    
    for(int j = A.size() - 1; j >= 0; --j){
        B[C[A[j]]-1] = A[j];
        C[A[j]]--;
    }
}
int main()
{
    int n;
    std::cin >> n;
    std::vector<int> A(n);
    for(int i = 0; i < n; ++i){
        std::cin >> A[i];
    }
    int k = *std::max_element(A.begin(), A.end());
    std::vector<int> B(n);
    CountingSort(A, B, k);
    for(int i = 0; i < n; ++i){
        if(i) std::cout << " ";
        std::cout << B[i];
    }
    std::cout << std::endl;
    return 0;
}