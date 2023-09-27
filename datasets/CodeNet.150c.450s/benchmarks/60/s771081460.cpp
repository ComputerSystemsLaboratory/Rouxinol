#include <bits/stdc++.h>
#define rep(i,a) for(i=0;i<a;i++)
using namespace std;

int main(void) {
    int i,j,n,u,k,v;
    vector< vector<int> > arr;
    cin >> n;
    arr.resize(n);
    rep(i,n) {
        arr[i].resize(n,0);
    }
    rep(i,n){
        cin >> u >> k;
        u--;
        rep(j,k){
            cin >> v;
            v--;
            arr[u][v]=1;
        }
    }
    rep(i,n){
        rep(j,n){
            if(j!=0) cout << " ";
            cout << arr[i][j];
        }
        cout << endl;
    }
    return 0;
}