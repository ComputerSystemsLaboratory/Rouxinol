#include <bits/stdc++.h>

#define MOD 1000000007
#define INF (1<<30)
#define INFL (1<<62)
#define pe(str) return cout<<(str)<<endl,0
#define px(str) cout<<(str)<<endl,exit(0)
#define accu(ac,v) cout<<setprecision(ac)<<v<<endl
#define bpc(a) __builtin_popcount(a)
#define pr(str) cout<<(str)<<endl
#define prpr(str) cout<<str<<endl
#define db(str) cerr<<"debug:"<<(str)<<endl
#define dbdb(str) cerr<<"debugs:"<<str<<endl
#define re(i,n) for(int i=0;i<(n);i++)
#define rre(i,n) for(int i=(n);i>=0;i--)
#define rep(i,a,b) for(int i=(a);i<(b);i++)
#define rrep(i,a,b) for(int i=(b);i>=(a);i--)
#define bw(a,b,c) (((a)<=(b))&&((b)<=(c)))
#define hello cout<<"hello"<<endl
#define spre(a) setprecision(a)
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define s3(C,T,F) ((C)?(T):(F))
#define max3(a,b,c) max((a),max((b),(c)))
#define min3(a,b,c) min((a),min((b),(c)))
#define max4(a,b,c,d) max((a),max((b),max((c),(d))))
#define min4(a,b,c,d) min((a),min((b),min((c),(d))))
#define enl cout<<endl
#define declare(t,n) t n;cin>>n

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int,int> pii;
typedef complex<int> point;

template<class InputIterator>
void dump(InputIterator first,InputIterator last,char delim=' '){
	for(InputIterator it=first;it!=last;it++){
		if(it!=first)cout<<delim;
		cout<<*it;
	}
}

ull p(ull x,ull y){
	if(y==0) return 1;
	ull A=p(x,y/2)%MOD;
	return (y&1?((A*A)%MOD*x)%MOD: (A*A)%MOD);
	// return (y&1?((A*A)*x):(A*A));
}

template<class T>
void swp(T &a,T &b){
	T t=a; a=b; b=t;
}

int main(void){
	int dp[1001][1001];
	string a,b;
	int n;
	cin>>n;

	while (n--) {
		cin>>a>>b;
		re(i,a.size()) re(j,b.size()) dp[i][j]=0;
		rep(i,1,a.size()+1) rep(j,1,b.size()+1) dp[i][j]=max3(dp[i-1][j-1]+(a[i-1]==b[j-1]),dp[i-1][j],dp[i][j-1]);
		cout<<dp[a.size()][b.size()]<<endl;
	}
	return 0;
}