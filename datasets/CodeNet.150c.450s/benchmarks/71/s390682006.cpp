#include <bits/stdc++.h>
using namespace std;

#define FOR(i,l,r) for(int i = (l);i < (r);i++)
#define ALL(x) (x).begin(),(x).end()
template<typename T> bool chmax(T& a,const T& b){return a < b ? (a = b,true) : false;}
template<typename T> bool chmin(T& a,const T& b){return b < a ? (a = b,true) : false;}
typedef long long ll;

int N;

int main()
{
	while(~scanf("%d",&N)){
		int ans = 0;
		FOR(i,0,10) FOR(j,0,10) FOR(k,0,10) FOR(l,0,10){
			if(i + j + k + l == N) ans++;
		}
		printf("%d\n",ans);
	}

	return 0;
}