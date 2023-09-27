#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <set>
#include <queue>
#include <stack>
#include <cmath>
#include <iomanip>
#include <map>
#include <cstring> //memset(dp,0,sizeof(dp))
#define ll long long
#define rep(i,n) for(int i=0;i<(n);i++)
#define repp(i,n) for(int i=n-1;i>=0;i--)
#define fi first
#define se second
using namespace std;
template<typename T1,typename T2> inline void chmin(T1 &a,T2 b){if(a>b) a=b;}
template<typename T1,typename T2> inline void chmax(T1 &a,T2 b){if(a<b) a=b;}
typedef pair<int,int> P;
//小数点以下　cout << fixed << setprecision(10) << num << endl;
//桁数はlog10(mid)でやれ　log(mid)/log(10)はWA
//long*long<0で判定するな　オーバーフローする
//開区間と閉区間どうにかしろ
//アルファベットが何番目かは x=s[i]-'a'
const ll MOD = 1000000007;
const int INF = 1001001001;
int main(){
    string x,y; cin >> x >> y;
    int lx=x.size();
    int ly=y.size();
    int dp[ly][lx];
    bool b1=0,b2=0;
    if(x[0]!=y[0]) dp[0][0]=1;
    else{
        dp[0][0]=0;
        b1=b2=1;
    }
    rep(i,ly-1){
        if(y[i+1]!=x[0]||b1) dp[i+1][0]=dp[i][0]+1;
        else{
            dp[i+1][0]=dp[i][0];
            b1=1;
        }
    }
    rep(i,lx-1){
        if(y[0]!=x[i+1]||b2) dp[0][i+1]=dp[0][i]+1;
        else{
            dp[0][i+1]=dp[0][i];
            b2=1;
        }
    }
    for(int i=1;i<ly;i++){
        for(int j=1;j<lx;j++){
            int c=0;
            if(y[i]!=x[j])c++;
            dp[i][j]=min(dp[i-1][j]+1,min(dp[i][j-1]+1,dp[i-1][j-1]+c));
        }
    }
    cout << dp[ly-1][lx-1] << endl;
    return 0;
}

