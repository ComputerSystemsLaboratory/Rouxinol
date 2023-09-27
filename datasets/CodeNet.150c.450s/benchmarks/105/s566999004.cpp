#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#define ll long long
#define int long long
#define rep(i,n) for(ll i=0;i<(n);i++)
#define pll pair<ll,ll>
#define pii pair<int,int>
#define pq priority_queue
#define pb push_back
#define eb emplace_back
#define fi first
#define se second
#define endl '\n'
#define ios ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define lb(c,x) distance(c.begin(),lower_bound(all(c),x))
#define ub(c,x) distance(c.begin(),upper_bound(all(c),x))

template<typename A,typename B>inline void chmin(A &a,B b){if(a>b)a=b;}
template<typename A,typename B>inline void chmax(A &a,B b){if(a<b)a=b;}

using namespace std;

inline int topbit(unsigned long long x){
	return x?63-__builtin_clzll(x):-1;
}

inline int popcount(unsigned long long x){
	return __builtin_popcountll(x);
}



void solve(){
	int N;
	cin>>N;
	vector<int> A(N);
	rep(i,N)cin>>A[i];

	string S;cin>>S;

	vector<int> T(60); //T[j]:=0がjビット目を0にできるときに使用する数。掃き出し法を用いて整理する。
	for(int i=N-1;i>=0;i--){
		int e=A[i];
		for(int j=59;j>=0;j--){
			if(T[j]==0)continue;
			if((e&T[j])==0)continue;
			if(topbit(e&T[j])==topbit(T[j]))e^=T[j]; //0がA[i]を0にできるかどうかを調べる
		}
		if(S[i]=='1'){
			if(e){
				cout<<1<<endl;
				return;
			}
		}
		else{
			if(e){
				rep(j,60){
					if(T[j]==0)continue;
					if((e&T[j])==0)continue;
					if(topbit(e&T[j])==topbit(e))T[j]^=e;
				}
				T[topbit(e)]=e;
			}
		}
	}
	cout<<0<<endl;
}

signed main(){
	int T;cin>>T;
	while(T--)solve();
	return 0;
}
