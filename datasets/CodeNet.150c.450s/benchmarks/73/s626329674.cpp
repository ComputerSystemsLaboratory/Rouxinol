#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) FOR(i, 0, n)
#define FOR(i, a, b) for(int i=a; i<b; i++)

#define N 112345
struct bit{
	int a[N];
	void init(){
		fill(a, a+N, 0);
	}

	void add(int i, int x){
		for(; i<N; i|=i+1){
			a[i]+=x;
		}
	}
	
	int sum(int i){
		int ret=0;
		for(i--; i>=0; i=(i&(i+1))-1){
			ret+=a[i];
		}
		return ret;
	}
	
	int sum(int i, int j){
		return sum(j)-sum(i);
	}
};

bit b;

int main(){
	b.init();
	int n, q;
	scanf("%d%d", &n, &q);
	REP(i, q){
		int c, x, y;
		scanf("%d%d%d", &c, &x, &y);
		if(c==0) b.add(x-1, y);
		else printf("%d\n", b.sum(x-1, y));
	}
}