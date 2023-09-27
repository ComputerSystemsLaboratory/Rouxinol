#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, M;
    while(scanf("%d%d", &N, &M) != EOF && (N||M)){
        int h[1505], w[1505];
        h[0] = 0;
        for(int i = 1; i <= N; i++){
            scanf("%d", h+i);
            h[i] += h[i-1];
        }
        w[0] = 0;
        for(int i = 1; i <= M; i++){
            scanf("%d", w+i);
            w[i] += w[i-1];
        }
        int pat[1500001];
        fill(pat, pat+1500001, 0);
        for(int i = 0; i < N; i++){
            for(int j = i+1; j <= N; j++){
                ++pat[h[j] - h[i]];
            }
        }
        int ret = 0;
        for(int i = 0; i < M; i++){
            for(int j = i+1; j <= M; j++){
                ret += pat[w[j] - w[i]];
            }
        }
        printf("%d\n", ret);
    }
    return 0;
}