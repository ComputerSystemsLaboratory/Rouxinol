#include <bits/stdc++.h>
using namespace std;

#define FOR(i,l,r) for(int i = (l);i < (r);i++)
#define ALL(x) (x).begin(),(x).end()
template<typename T> bool chmax(T& a,const T& b){return a < b ? (a = b,true) : false;}
template<typename T> bool chmin(T& a,const T& b){return b < a ? (a = b,true) : false;}
typedef long long ll;

int A,B;

int digit_count(int x)
{
	int res = 0;
	do{
		res++;
	}while(x /= 10);
	return res;
}

int main()
{
	while(~scanf("%d%d",&A,&B)){
		printf("%d\n",digit_count(A + B));
	}

	return 0;
}