#include <bits/stdc++.h>
using namespace std;

#define FOR(i,l,r) for(int i = (l);i < (r);i++)
#define ALL(x) (x).begin(),(x).end()
template<typename T> bool chmax(T& a,const T& b){return a < b ? (a = b,true) : false;}
template<typename T> bool chmin(T& a,const T& b){return b < a ? (a = b,true) : false;}
typedef long long ll;

int main()
{
	int N;
	stack<int> s;
	while(~scanf("%d",&N)){
		if(N){
			s.push(N);
		}
		else{
			printf("%d\n",s.top());
			s.pop();
		}
	}

	return 0;
}