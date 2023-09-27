#include <bits/stdc++.h>
#include <math.h>
#define ALL(a)    a.begin(), a.end() 
#define rep(i, K, N)  for(long long int i = K; i < N; i++)
#define ll long long int
#define PP 1000000007
using namespace std;

ll N, M;
queue<ll> Q;
vector<vector<ll>> G;
vector<ll> seen;

void bfs(){
 
    if(!Q.empty()){
 
        ll x = Q.front(), L = G[x].size();
 
        Q.pop();
 
        rep(i, 0, L){
 
            if(seen[G[x][i]] != -1)continue;
 
            Q.push(G[x][i]);seen[G[x][i]] = seen[x] + 1;
 
        }
 
        bfs();
 
    }
}

int main(){
cin >> N >> M;
G.resize(N + 1);seen.resize(N + 1);
seen[1] = 0;

rep(i, 2, N + 1)seen[i] = -1;

rep(i, 0, M){

  ll a, b;cin >> a >> b;

  G[a].push_back(b);G[b].push_back(a);

}

Q.push(1);

bfs();
  
cout << "Yes" << endl;

rep(i, 2, N + 1){

  ll L = G[i].size();

  rep(j, 0, L){

    if(seen[G[i][j]] == seen[i] - 1){cout << G[i][j] << endl;break;}

  }

}
  
}