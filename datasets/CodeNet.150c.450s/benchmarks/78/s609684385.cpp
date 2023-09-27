#include <bits/stdc++.h>

using namespace std;

#ifdef DEBUG_MODE
	#define DBG(n) n;
#else
	#define DBG(n) ;
#endif
#define REP(i,n) for(ll (i) = (0);(i) < (n);++i)
#define rep(i,s,g) for(ll (i) = (s);(i) < (g);++i)
#define rrep(i,s,g) for(ll (i) = (s);i >= (g);--(i))
#define PB push_back
#define MP make_pair
#define FI first
#define SE second
#define SHOW1d(v,n) {for(int W = 0;W < (n);W++)cerr << v[W] << ' ';cerr << endl << endl;}
#define SHOW2d(v,i,j) {for(int aaa = 0;aaa < i;aaa++){for(int bbb = 0;bbb < j;bbb++)cerr << v[aaa][bbb] << ' ';cerr << endl;}cerr << endl;}
#define ALL(v) v.begin(),v.end()
#define Decimal fixed<<setprecision(20)
#define INF 1000000000
#define MOD 1000000007

typedef long long ll;
typedef pair<ll,ll> P;

int A[2111111];
int B[2111111];
int seica[11111];


int main(){
	
	REP(i,1111111)A[i] = B[i] = INF;
	A[0] = B[0] = 0;
	REP(i,11111){
		seica[i] = i*(i+1)*(i+2)/6;
		if(seica[i] > 1000000)break;
	}
	
	REP(i,1000000){
		for(int j = 1;j < 10000;j++){
			A[i+seica[j]] = min(A[i]+1,A[i+seica[j]]);
			if(i + seica[j] > 1000000)break;
		}
	}
			
	REP(i,1000000){
		for(int j = 1;j < 10000;j++){
			if(seica[j]%2==1)B[i+seica[j]] = min(B[i]+1,B[i+seica[j]]);
			if(i + seica[j] > 1000000)break;
		}
	}	
	
	DBG(SHOW1d(A,100);)
	DBG(SHOW1d(B,100);)
	
	int n;
	while(cin >> n ,n){
		cout << A[n] << ' ' << B[n] << endl;
	}
	
	return 0;
}
