#include <bits/stdc++.h>
#define ll long long
#define INF 1000000005
#define MOD 1000000007
#define rep(i,n) for(int i=0;i<n;++i)

using namespace std;

typedef pair<int,int>P;

const int MAX_N = 100005;

ll n;
pair<P,P> PP[100];

pair<P,P> multiple(pair<P,P> A,pair<P,P> B)
{
	pair<P,P> C;
	P p = A.first,q = A.second;
	P r = B.first,s = B.second;
	C.first = P((p.first*r.first+p.second*s.first),(p.first*r.second+p.second*s.second));
	C.second = P((q.first*r.first+q.second*s.first),(q.first*r.second+q.second*s.second));
	return C;
}

int main()
{
	int cnt=0;
	scanf("%lld",&n);
	if(n==0){
		printf("1\n");
		return 0;
	}else if(n==1){
		printf("1\n");
		return 0;
	}
	n;
	ll buff = n;
	while(buff != 1){
		buff /= 2;
		cnt++;
	}
	PP[0].first = P(0,1);
	PP[0].second = P(1,1);
	rep(i,cnt){
		PP[i+1] = multiple(PP[i],PP[i]);
	}
	pair<P,P> res;
	res.first = P(1,0);
	res.second = P(0,1);
	rep(i,cnt+1){
		if(n & (1 << i)){
			res = multiple(res,PP[i]);
		}
	}
	printf("%d\n",res.second.second);
	return 0;
}