#include <cstdio>
#include <algorithm>

const int N = 15;
const int INF = 1 << 25;
int dist[N][N];
void chmin(int &a, int b) {
    a = std::min(a, b);
}

int main() {
    while(1) {
        int M; scanf("%d", &M);
        if(M == 0) break;

        for(int i=0; i<N; i++) {
            for(int j=0; j<N; j++) {
                if(i != j) dist[i][j] = INF;
            }
        }

        int T = 0;
        for(int i=0; i<M; i++) {
            int a, b, c; scanf("%d%d%d", &a, &b, &c);
            chmin(dist[a][b], c);
            chmin(dist[b][a], c);
            T = std::max({T, a+1, b+1});
        }

        for(int k=0; k<T; k++) {
            for(int i=0; i<T; i++) {
                for(int j=0; j<T; j++) {
                    chmin(dist[i][j], dist[i][k] + dist[k][j]);
                }
            }
        }

        int ans = INF, idx = 0;
        for(int i=0; i<T; i++) {
            int sum = 0;
            for(int k=0; k<T; k++) {
                sum += dist[i][k];
            }
            if(ans > sum) {
                ans = sum;
                idx = i;
            }
        }
        printf("%d %d\n", idx, ans);
    }
    return 0;
}
