#include<bits/stdc++.h>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) range(i,0,b)
#define debug(x) cout << "debug" << x << endl;
using namespace std;

int main(){
    int n,m;
    while(cin >> n >> m){
        int A[100][100], ans[1000] = {0};
        rep(i,n){
            rep(j,m){
                cin >> A[i][j];
            }
        }
        rep(i,m){
            int inp;
            cin >> inp;
            rep(j,n){
                ans[j] += A[j][i] * inp;
            }
        }
        rep(i,n) cout << ans[i] << endl;
    }
}