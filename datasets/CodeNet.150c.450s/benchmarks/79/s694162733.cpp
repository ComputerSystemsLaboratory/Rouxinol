#include <cstdio>
#include <algorithm>

int main(){
    int N, R;
    while(scanf("%d %d", &N, &R), N || R){
        int cards[51], _a[51];
        for(int i=1;i<=N;i++){
            cards[i] = N-i+1;
        }

        while(R--){
            int p, c;
            scanf("%d %d", &p, &c);
            
            for(int i=1;i<p;i++){
                _a[i] = cards[i];
            }
            for(int i=1;i<=c;i++){
                cards[i] = cards[p+i-1];
            }
            for(int i=1;i<p;i++){
                cards[c+i] = _a[i];
            }
        }

        printf("%d\n", cards[1]);
    }

    
}