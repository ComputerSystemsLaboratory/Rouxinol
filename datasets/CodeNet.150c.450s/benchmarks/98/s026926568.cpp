#include <bits/stdc++.h>
using namespace std;

const int INF = 0x3f3f3f3f;

int N, M;
vector<int> A, B;

void solve(){
    int smin = INF;
    int aans = -1, bans = -1;
    
    for(int a=0; a<N; a++){
        for(int b=0; b<M; b++){
            int s1 = 0, s2 = 0;
            
            for(int i=0; i<N; i++) if(i != a)
                s1 += A[i];
            for(int i=0; i<M; i++) if(i != b)
                s2 += B[i];
            
            s1 += B[b];
            s2 += A[a];
            
            if(s1 == s2 && A[a] + B[b] < smin){
                smin = A[a] + B[b];
                aans = A[a];
                bans = B[b];
            }
        }
    }
    if(smin == INF)
        cout << -1 << endl;
    else
        cout << aans << " " << bans << endl;
}

int main(){
    while(cin >> N >> M, N|M){
        A.resize(N);
        B.resize(M);
        
        for(auto &v: A)
            cin >> v;
        for(auto &v: B)
            cin >> v;
        
        solve();
    }
}