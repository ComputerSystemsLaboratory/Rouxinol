#include <cstdio>
#include <queue>
#include <algorithm>

#define rep(i, n) for(int i = 0; i < (n); ++i)

using namespace std;

typedef pair<int, int> P;

int n, q;
char s[100000][11];
queue<P> x;

int main(){
	scanf("%d%d", &n, &q);
	rep(i, n){
		int t;
		scanf("%s%d", s[i], &t);
		x.push(P(i, t));
	}
	int t = 0;
	while(!x.empty()){
		P v = x.front();
		x.pop();
		if(v.second <= q){
			t += v.second;
			printf("%s %d\n", s[v.first], t);
		}
		else{
			t += q;
			v.second -= q;
			x.push(v);
		}
	}
	return 0;
}