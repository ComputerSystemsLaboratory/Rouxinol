#include <iostream>
#include <vector>
using namespace std;
typedef vector<int> vint;
#define range(i,a,b) for(int i=a;i<b;++i)
#define rep(i,n) range(i,0,n)

int main(){
    int n;
    cin >> n;
    vector<vint> A(n,vint(n,0));
    rep(i,n){
        int u,k;
        cin >> u >> k;
        rep(j,k){
            int v;
            cin >> v;
            A[u-1][v-1]=1;
        }
    }
    rep(i,n){
        rep(j,n){
            cout << A[i][j];
            if(j<n-1) cout << ' ';
        }
        cout << endl;
    }
}

