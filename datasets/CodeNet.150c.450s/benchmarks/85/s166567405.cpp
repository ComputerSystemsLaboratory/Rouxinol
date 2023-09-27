#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rrep(i, n) for (int i = 1; i < (n+1); ++i)
using namespace std;
using ll = long long;
const int INF = +100100100;
// typedef pair<int,int> P;

vector<int>P;

int dp(int n){
    vector<vector<int>> D(n,vector<int>(n));
    rep(j,n){
        for(int i = j;i>=0;--i){
            if(i==j)D[i][j]=0;
            else{
                int mini = INF;
                for(int k = i;k<j;++k){
                    int rel = D[i][k]+D[k+1][j]+P[i]*P[k+1]*P[j+1];
                    mini = min(mini,rel);
                }
                D[i][j]=mini;
            }
        }
    }
    return D[0][n-1];
}

int main(){
    int n;
    cin>>n;
    rep(i,n){
        int x,y;cin >> x>>y;
        if(i==0){
            P.push_back(x);
            P.push_back(y);
        }
        else{
            P.push_back(y);
        }
    }
    cout << dp(n) << endl;
    return 0;
}
