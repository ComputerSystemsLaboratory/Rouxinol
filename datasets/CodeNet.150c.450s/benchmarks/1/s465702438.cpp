#include <cstdio>
#include <algorithm>
#include <limits>

#define INF_I std::numeric_limits<int>::max()
#define MAX_N 100000

int main(){
    int N;
    int L[MAX_N];
    scanf("%d", &N);
    std::fill(L, L + N + 1, INF_I);
    for(int i = 0; i < N; ++i){
        int A;
        scanf("%d", &A);
        *std::lower_bound(L, L + N + 1, A) = A;
    }
    printf("%d\n", std::lower_bound(L, L + N, INF_I) - L);
    return 0;
}