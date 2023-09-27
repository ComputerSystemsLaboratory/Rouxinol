#include "bits/stdc++.h"

#define REP(i,num) for(ll i=0;i<(num);++i)
#define FOR(i,c,num) for(ll (i)=(c);(i)<(num);++(i))
#define LOOP(i) while(i--)
#define ALL(c) c.begin(),c.end()
#define PRINTALL(c) for(auto pitr=c.begin();pitr!=c.end();++pitr){cout<<*pitr;if(next(pitr,1)!=c.end())cout<<' ';}cout<<endl;
#define PAIRCOMP(c,comp) [](const pair<ll,ll>& lhs,const pair<ll,ll>& rhs){return lhs.c comp rhs.c;}

using namespace std;
using ll = long long;
using vll = vector<ll>;
using vvll = vector<vector<ll>>;

constexpr ll atcoder_mod = 1e9+7;

template<typename T=ll>
T in(){ T x; cin >> x; return (x); }
template<typename T=ll,typename C=vector<T>>
C vecin(int N){ C x(N);REP(i,N){ x[i]=in<T>(); }return x; }

void vout(){ cout << endl; }
template<typename Head,typename... Tail>
void vout(Head&& h,Tail&&... t){ cout << ' ' << h;vout(forward<Tail>(t)...); }
void out(){ cout << endl; }
template<typename Head,typename... Tail>
void out(Head&& h,Tail&&... t){ cout << h;vout(forward<Tail>(t)...); }

template<typename T>
bool chmax(T& a,T b){ if(a<b){ a=b;return true; }return false; }
template<typename T>
bool chmin(T& a,T b){ if(a>b){ a=b;return true; }return false; }

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);
	cout<<fixed<<setprecision(10);

	auto D=in();
	auto C=vecin(26);
	vvll S(D,vll(26));
	REP(i,D){
		REP(j,26) S[i][j]=in();
	}
	auto T=vecin(D);
	vll L(26,0);

	ll A=0;
	REP(i,D){
		ll d=i+1;
		A += S[i][T[i]-1];
		L[T[i]-1] = d;
		REP(j,26){
			if(T[i]-1!=j){
				A -= C[j]*(d-L[j]);
			}
		}
		out(A);
	}
	return 0;
}
