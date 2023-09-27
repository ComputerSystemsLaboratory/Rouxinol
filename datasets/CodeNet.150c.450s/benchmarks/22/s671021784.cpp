// Single Shortest Path II
// 問題URL: http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_1_B&lang=jp
// 中央*右
// 
// Vの数が多くFloyd-Warsallでは厳しい...のでBellman-Ford法で解きました。
// ネガティブサイクルの検知がよく分からなかったのですが、あえてV周目のループを回すという方法を下記を参考に実装しました。
// https://www.dyclassroom.com/graph/detecting-negative-cycle-using-bellman-ford-algorithm

#include <iostream>

using namespace std;

int V, E, R, S[2000+5], T[2000+5], D[2000+5];
int C[1000+5]; // 各頂点までの最短距離の上限
const int inf = 1001001001;

void solve(){
    bool update;

    for(int i = 0; i <= V; i++){
        update = false;
        for(int j = 0; j < E; j++){
            int s=S[j], t=T[j], d=D[j];
            if(C[s] < inf && C[s]+d < C[t]){
                // printf("C[%d]: %d to %d\n",t,C[t],C[s]);
                C[t] = C[s]+d;
                update = true;
            }
        }
    }
    if(update){//もしV周目で更新があれば、ネガティブサイクルが存在する
            cout << "NEGATIVE CYCLE" << endl;
    }else{
        for(int i = 0; i < V; i++) {
            if(C[i]==inf) cout << "INF" << endl;
            else cout << C[i] << endl;
        }
    }
}

int main(){
    cin >> V >> E >> R;
    
    fill(C,C+V,inf);
    C[R] = 0;

    for(int i = 0; i < E; i++){
        cin >> S[i] >> T[i] >> D[i];
    }

    solve();
}

