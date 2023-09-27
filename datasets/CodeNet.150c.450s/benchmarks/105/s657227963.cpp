#include <bits/stdc++.h>
#define SZ(X) ((int)(X).size())
#define ALL(X) (X).begin(), (X).end()
#define REP(I, N) for (int I = 0; I < (N); ++I)
#define REPP(I, A, B) for (int I = (A); I < (B); ++I)
#define RI(X) scanf("%d", &(X))
#define RII(X, Y) scanf("%d%d", &(X), &(Y))
#define RIII(X, Y, Z) scanf("%d%d%d", &(X), &(Y), &(Z))
#define DRI(X) int (X); scanf("%d", &X)
#define DRII(X, Y) int X, Y; scanf("%d%d", &X, &Y)
#define DRIII(X, Y, Z) int X, Y, Z; scanf("%d%d%d", &X, &Y, &Z)
#define RS(X) scanf("%s", (X))
#define CASET int ___T, case_n = 1; scanf("%d ", &___T); while (___T-- > 0)
#define MP make_pair
#define PB push_back
#define MS0(X) memset((X), 0, sizeof((X)))
#define MS1(X) memset((X), -1, sizeof((X)))
#define LEN(X) strlen(X)
#define F first
#define S second
#define RF(x) freopen(x,"r",stdin)
#define WF(x) freopen(x,"w",stdout)
typedef long long LL;
using namespace std;
typedef pair<LL,LL> PLL;
typedef pair<int,int> PII;
const LL MOD = (LL)1e9+7;
const int SIZE = 2e5+5;
const LL INF = 1LL<<60;
const double eps = 1e-4;
const double PI=3.1415926535897932;

LL a[209];
char s[209];

int clz(unsigned long long N) {
    return N ? 64 - __builtin_clzll(N) : -1e9;
}

LL reduce(vector<LL> &a,LL x){
	for(LL j:a){
		if(clz(j^x)<clz(x))return reduce(a,j^x);
	}
	return x;
}

int main(){
	CASET{
		DRI(n);
		REP(i,n){
			scanf("%lld",&a[i]);
		}
		RS(s);
		vector<long long> b;
		bool good = 1;
		for(int i=n-1;i>=0;i--){
			if(s[i]=='0'){// add to base!
				LL nx = reduce(b,a[i]);
				if(nx)b.PB(nx);
			}
			else{ // check!
				LL nx = reduce(b,a[i]);
				if(nx!=0){
					puts("1");
					good = 0;
					break;
				}
			}
		}
		if(good)puts("0");
		case_n++;
	}
}
