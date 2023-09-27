#include "bits/stdc++.h"

#define REP(i,num) for(int i=0;i<(num);++i)
#define LOOP(i) while(i--)
#define ALL(c) c.begin(),c.end()
#define PRINTALL(c) for(auto& x:c){cout<<x<<' ';}cout<<endl;
#define PAIRCOMP(c,comp) [](const pair<ll,ll>& lhs,const pair<ll,ll>& rhs){return lhs.c comp rhs.c;}

using namespace std;
using ll = long long;

constexpr ll atcoder_mod = 1e9+7;

template<typename T=int>
T in(){T x; cin >> x; return (x);}
template<typename T=int,typename C=vector<T>>
C vecin(int N){C x(N);REP(i,N){x[i]=in<T>();}return move(x);}

void vout(){cout << endl;}
template<typename Head,typename... Tail>
void vout(Head&& h,Tail&&... t){cout << ' ' << h;vout(forward<Tail>(t)...);}
void out(){cout << endl;}
template<typename Head,typename... Tail>
void out(Head&& h,Tail&&... t){cout << h;vout(forward<Tail>(t)...);}

template<typename T>
bool chmin(T& a,T b){if(a>b){a=b;return true;}return false;}

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);

	string S=in<string>(),T=in<string>();
	int SN=S.size(),TN=T.size();
	vector<vector<ll>> dp(SN+1,vector<ll>(TN+1,1LL<<60));
	REP(i,SN+1) dp[i][0]=i;
	REP(i,TN+1) dp[0][i]=i;

	REP(i,SN){
		REP(j,TN){
			int cost = (S[i]==T[j]) ? 0 : 1;
			chmin(dp[i+1][j+1],dp[i][j]+cost);
			chmin(dp[i+1][j+1],dp[i+1][j]+1);
			chmin(dp[i+1][j+1],dp[i][j+1]+1);
		}
	}

	out(dp[SN][TN]);
	return 0;
}

