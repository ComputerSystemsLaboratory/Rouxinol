#include <bits/stdc++.h>
using namespace std;

int main(){

    int N,M;
    cin >> N >> M;
    vector<int> A(M),B(M);
    for(int i=0;i<M;i++)
        cin >> A[i] >> B[i];

    vector<vector<int>> G(N+1); //G(0) will not be used
    for(int i=0;i<M;i++){
        G[A[i]].push_back(B[i]);
        G[B[i]].push_back(A[i]);
    }

    queue<int> que;
    que.push(1);
    int signs[N+1];
    bool reached[N+1];
    for(int i=0;i<=N;i++)
        reached[i] = false;

    while(!que.empty()){
        int now = que.front();
        que.pop();
        for(auto v : G[now]){
            if(!reached[v]){
                que.push(v);
                reached[v] = true;
                signs[v] = now;
            }
        }
    }

    cout << "Yes" << endl;
    for(int i=2;i<=N;i++){
        cout << signs[i] << endl;
    }

    return 0;
}