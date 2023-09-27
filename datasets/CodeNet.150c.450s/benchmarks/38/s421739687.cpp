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
	vector< vector<int> > A(N,vector<int>(3));
	FOR(i,0,N){
		int A [3];
		scanf("%d%d%d",&A [0],&A [1],&A [2]);
		sort(A,A + 3);
		if(A [0] * A [0] + A [1] * A [1] == A [2] * A [2]){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}

	return 0;
}