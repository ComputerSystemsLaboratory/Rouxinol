#include <bits/stdc++.h>
#include <cmath>

using namespace std;

#define REP(i,n)	for(int i=0, i##_len=(n); i<i##_len; ++i)
#define REPS(i,s,n)	for(int i=(s), i##_len=(n); i<i##_len; ++i)

#define ALL(obj)	(obj).begin(),(obj).end()
#define sz(x) (int)(x).size()
#define v(T) vector<T>
#define VEC vector

typedef unsigned int 			uint;
typedef unsigned long long int	ull;
typedef long long int 			ll;

typedef pair<int,int>			P;
typedef vector<int>				Vint;
typedef vector<Vint>			VV;

template<typename T>string join(const v(T)&v)
{stringstream s;REP(i,sz(v))s<<' '<<v[i];return s.str().substr(1);}
template<typename T>inline ostream& operator<<(ostream&o,const v(T)&v)
{if(sz(v))o<<join(v);return o;}

#undef _P
#define _P(...) (void)printf(__VA_ARGS__)
#define MAX 		100010


const ll LINF = (ll)9e18+7;		//
const int INF = 100100100;			//2,147,483,647 (Max int)
const ll MOD = 1e9+7;
// テンプレ終了
//====================================================================//

int DP[MAX];

int main(){
	int N;cin >> N;

	REPS(x,1,100)REPS(y,x,100)REPS(z,y,100){
		int t = x*x + y*y + z*z + x*y + y*z + z*x;
		if (t > 10010)break;
		
		int c = (x==y) + (y==z) + (z==x);
		if(c == 0) DP[t]+=6;
		else if(c == 1 || c==2) DP[t] += 3;
		else DP[t] ++;
	}

	REPS(i,1,N+1)cout << DP[i] << endl;

	return 0;
}
 

