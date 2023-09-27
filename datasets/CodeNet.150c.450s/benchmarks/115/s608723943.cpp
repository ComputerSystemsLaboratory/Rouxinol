#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define inf 1e9+7

int dp[1001][1001];
char x[1001],y[1001];

void init(){
    for(int i=0;i<1001;i++){
        dp[0][i]=0;
        dp[i][0]=0;
    }
}

void solve(int sn, int tn){
    for(int i=1;i<=sn;i++){
        for(int j=1;j<=tn;j++){
            if(x[i-1]==y[j-1])dp[i][j]=dp[i-1][j-1]+1;
            else dp[i][j]=max(dp[i-1][j], dp[i][j-1]);
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    string s,t;
    for(int i=0;i<n;i++){
        init();
        cin >> s >> t;
        int sn=s.size();
        int tn=t.size();
        for(int j=0;j<sn;j++){
            x[j]=s[j];
        }
        for(int j=0;j<tn;j++){
            y[j]=t[j];
        }

        solve(sn, tn);
        cout << dp[sn][tn] << endl;
    }

}

