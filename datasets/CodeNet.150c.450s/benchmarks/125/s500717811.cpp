#include <bits/stdc++.h>
#define W 0
#define B 1
#define G 2
#define rep(i,a) for(i=1;i<=a;i++)
using namespace std;

vector <vector<int> > A;
vector <int> c;
vector <int> d;
vector <int> f;
vector <int> k;

int n,u,t;

void visit(int r) {
    int i;
    c[r] = G;
    d[r] = ++t;
    rep(i,k[r]){
        if(c[A[r][i]] == W) visit(A[r][i]);
    }
    c[r] = B;
    f[r] = ++t;
}

void dfs(void){
    int i;
    rep(i,n) 
        c[i] = W;
    t = 0;
    rep(i,n){
        if(c[i] == W) visit(i);
    }
}

int main(void){
    int i,j;
    cin >> n;
    c.resize(n+1);
    d.resize(n+1);
    f.resize(n+1);
    k.resize(n+1);
    A.resize(n+1);
    rep(i,n) A[i].resize(n+1);
    rep(i,n){
        cin >> u >> k[i];
        rep(j,k[i]){
            cin >> A[i][j];
        }
    }
    dfs();
    rep(i,n){
        cout << i << " " <<d[i] << " "<< f[i] << endl;
    }
    return 0;
}