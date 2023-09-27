#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M; cin >> N >> M;
    vector<vector<int>> G(N);
    set<int>S;
    for (int X = 0; X < M; X++) {
        int L, R;
        cin >> L >> R;
        G[L-1].push_back(R-1);
        G[R-1].push_back(L-1);
        S.insert(L-1);
        S.insert(R-1);
    }
    vector<int> V(N, -1);queue<int> Q;
    V[0] = 0;
    Q.push(0);
    if(S.size()<N){
        cout<<"No"<<endl;
    }
    else{
        cout<<"Yes"<<endl;
        for (;!Q.empty();) {
            int W = Q.front();
            Q.pop(); 
            for (int p : G[W]) {
                if (V[p] != -1){
                    continue;
                }
                V[p] = W;
                Q.push(p);
            }
        }
        for (int X = 0; X < N; X++) {
            if(X!=0){
                cout << V[X]+1 << endl;
            }
        }
    }
}