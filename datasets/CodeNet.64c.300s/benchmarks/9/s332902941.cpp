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
	scanf("%d",&N);
	ll money = 1e5;

	FOR(i,0,N){
		money *= 1.05;
		money = (money + 999) / 1000 * 1000;
	}

	printf("%lld\n",money);

	return 0;
}