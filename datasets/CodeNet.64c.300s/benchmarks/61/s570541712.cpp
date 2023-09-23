#include<bits/stdc++.h>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) range(i,0,b)
#define debug(x) cout << "debug" << x << endl;
using namespace std;

int main(){
    int n,m;
    while(cin >> n >> m){
        int ans[105][105] = {0};
        rep(i,n){
            rep(j,m){
                int inp;
                cin >> inp;
                ans[i][j] = inp;
                ans[i][m] += inp;
                ans[n][j] += inp;
            }
            ans[n][m] += ans[i][m];
        }
        rep(i,n+1){
            rep(j,m+1){
                if(j) cout << ' ';
                cout << ans[i][j];
            }
            cout << endl;
        }
    }
}