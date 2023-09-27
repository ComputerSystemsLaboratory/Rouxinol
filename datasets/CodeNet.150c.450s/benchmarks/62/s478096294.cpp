#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std; 
int main()
{
    std::vector<int> A(3);
    scanf("%d %d %d", &A[0], &A[1], &A[2]);
    std::sort(A.begin(), A.end());
    for(int i = 0; i < A.size(); i++){
        if(i) printf(" ");
        printf("%d", A[i]);
    }
    printf("\n");
    return 0;
}