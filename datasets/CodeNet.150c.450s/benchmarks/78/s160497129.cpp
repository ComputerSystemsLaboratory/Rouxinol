#include <iostream>
using namespace std;
const int M = 179,R = 1000001;
int dp1[R],dp2[R],T[M];

void solve(void) {
    for (int i = 1; i < R; i++) dp1[i] = dp2[i] = R;
    for (int i = 1; i <= M+1; i++) T[i-1] = i*(i+1)*(i+2)/6;
    for (int i = 0; i < M; i++) {
        int t = T[i];
        for (int j = t; j < R; j++) {
            if (dp1[j-t] < R) dp1[j] = min(dp1[j], dp1[j-t]+1);
            if (t%2 == 0) continue;
            if (dp2[j-t] < R) dp2[j] = min(dp2[j], dp2[j-t]+1);
        }
    }
}

int main(void){
    solve();
    while (1) {
        int N;
        cin >> N;
        if (N == 0) break;
        printf("%d %d\n",dp1[N],dp2[N]);
    }
    return 0;    
}