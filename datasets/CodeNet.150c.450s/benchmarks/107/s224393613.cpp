#include<bits/stdc++.h>
using namespace std;
typedef pair<double,double> P;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
#define pb push_back
#define mp make_pair
#define eps 1e-9
#define INF 2000000000
#define LLINF 1000000000000000ll
#define sz(x) ((int)(x).size())
#define fi first
#define sec second
#define all(x) (x).begin(),(x).end()
#define sq(x) ((x)*(x))
#define rep(i,n) for(int (i)=0;(i)<(int)(n);(i)++)
#define repn(i,a,n) for(int (i)=(a);(i)<(int)(n);(i)++)
#define EQ(a,b) (abs((a)-(b))<eps)
template<class T> void chmin(T& a,const T& b){if(a>b)a=b;}
template<class T> void chmax(T& a,const T& b){if(a<b)a=b;}
string s,t;
int dp[1010][1010];
int main(){
	cin >> s >> t;
	for(int i=0;i<=s.size();i++)dp[i][0]=i;
	for(int i=0;i<=t.size();i++)dp[0][i]=i;
	for(int i=0;i<s.size();i++){
		for(int j=0;j<t.size();j++){
			dp[i+1][j+1]=INF;
			chmin(dp[i+1][j+1],dp[i][j+1]+1);
			chmin(dp[i+1][j+1],dp[i+1][j]+1);
			if(s[i]==t[j])chmin(dp[i+1][j+1],dp[i][j]);
			else chmin(dp[i+1][j+1],dp[i][j]+1);
			//cout << dp[i][j] << ' ';
		}
		//cout << endl;
	}
	cout << dp[s.size()][t.size()] << endl;
	return 0;
}
