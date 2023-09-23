#include<iostream>
#define rep(i,n) for(int i=0; i<n; i++)

using namespace std;

int main(void)
{
    int n, u, v, k, a[101][101]={0}, adj[101];

    cin >> n;
    rep(i,n){
        cin >> u >> k;
        rep(i,k){
            cin >> v;
            a[u][v] = 1;
        }
    }

    rep(i,n){
        rep(j,n){ cout << a[i+1][j+1]; if(j != n-1) cout << ' ';}
        cout << endl;
    }
    return 0;
}


