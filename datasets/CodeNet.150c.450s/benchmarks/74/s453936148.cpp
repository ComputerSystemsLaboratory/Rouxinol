#include<bits/stdc++.h>
using namespace std;
typedef pair<double,double> P;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
#define pb push_back
#define mp make_pair
#define eps 1e-9
#define INF 1000000000
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
int dp[22][50010];
int n,m;
int c[22];
int main(){
	scanf("%d %d",&n,&m);
	for(int i=0;i<m;i++)scanf("%d",&c[i]);
	for(int i=0;i<=m;i++){
		for(int j=1;j<=n;j++){
			dp[i][j]=INF;
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<=n;j++){
			dp[i+1][j]=dp[i][j];
			if(j>=c[i])chmin(dp[i+1][j],dp[i+1][j-c[i]]+1);
		}
	}
	/*for(int i=0;i<=m;i++){
		for(int j=0;j<=n;j++){
			cout << dp[i][j] << ' ';
		}
		cout << endl;
	}*/
	cout << dp[m][n] << endl;
	return 0;
}
