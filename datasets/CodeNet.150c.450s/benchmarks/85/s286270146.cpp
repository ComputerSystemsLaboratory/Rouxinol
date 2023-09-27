// ALDS1_10_B
#include <bits/stdc++.h>
#define endl "\n"
#define rep(i,n) for(int i=0;i<int(n);i++)
#define SZ(x) ((int)(x).size())
#define all(x) (x).begin(),(x).end()
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int,int> ipair;
typedef pair<ll,ll> lpair;
template <class T>ostream &operator<<(ostream &o,const vector<T>&v) //vectorの中身を見る
{o<<"{";for(int i=0;i<(int)v.size();i++)o<<(i>0?", ":"")<<v[i];o<<"}";return o;}

vector<int> r(110);
vector<int> c(110);
int inf=pow(10,9);
vector<vector<int>> dp(110,vector<int>(110,inf));
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    cout << fixed << setprecision(12);
    
    int n;
    cin>>n;
    rep(i,n) cin>>r[i]>>c[i];
    rep(i,n) dp[i][i]=0; //長さ1の計算量
    for(int L=2;L<=n;L++){ //長さ 短い長さからdpテーブルを埋めていく
        for(int i=0;i<=n-2;i++){ //始点
            int j=i+L-1; //終点
            if(n-1<j) break; //範囲オーバー 
            for(int k=i;k<=j-1;k++){ //i~k,k+1~jで区切る。区切ったブロックの長さは互いにL以下なので、すでに互いのブロックの最小コストはdpテーブルにある。
                dp[i][j]=min(dp[i][j],dp[i][k]+dp[k+1][j]+r[i]*r[k+1]*c[j]);
            }
        }
    }
    cout<<dp[0][n-1]<<endl;
    return 0;
}
