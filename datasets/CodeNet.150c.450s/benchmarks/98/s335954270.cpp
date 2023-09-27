#include <cstdio>
#include <algorithm>

using namespace std;

const int INF = 1 << 28;
const int MAX   = 100;

int n, m;
int sum[2];
int card[2][MAX];

void solve(){
    int t, h;
    int min_val = INF;
    
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            if(sum[0] - card[0][i] + card[1][j] == sum[1] + card[0][i] - card[1][j]){
                if(card[0][i] + card[1][j] < min_val){
                    t       = card[0][i];
                    h       = card[1][j];
                    min_val = t + h;
                }
            }
        }
    }
    
    if(min_val < INF){
        printf("%d %d\n", t, h);
    }
    
    else {
        printf("-1\n");
    }
}

int main(){
    
    while(scanf("%d %d", &n, &m), n > 0){
        
        fill_n(sum, 2, 0);
        
        for(int i = 0; i < 2; ++i){
            for(int j = 0, l = (i == 0 ? n : m); j < l; ++j){
                scanf("%d", &card[i][j]);
                sum[i] += card[i][j];
            }
        }
        
        solve();
    }
    
    return 0;
}