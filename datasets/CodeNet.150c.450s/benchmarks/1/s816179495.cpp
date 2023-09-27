#include <cstdio>
#include <algorithm>
#include <limits>

constexpr int INF_I = std::numeric_limits<int>::max();
constexpr int MAX_N = 100000;

int main(){
    int N;
    int L[MAX_N], length = 1;
    std::fill(L, L + MAX_N, INF_I);
    scanf("%d", &N);
    for(int i = 0; i < N; ++i){
        int A;
        scanf("%d", &A);
        *std::lower_bound(L, L + N + 1, A) = A;
    }
    printf("%d\n", std::find(L, L + N, INF_I) - L);
    return 0;
}