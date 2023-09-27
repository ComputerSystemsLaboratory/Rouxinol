#include <cstdio>
#include <algorithm>

#define rep(i, n) for(int i = 0; i < (n); ++i)

using namespace std;

int n, k;
int w[100001];

bool judge(int p){
	int a = 0;
	rep(i, k){
		a = upper_bound(w + a, w + n + 1, w[a] + p) - w - 1;
		if(a == n){
			return true;
		}
	}
	return false;
}

int main(){
	scanf("%d%d", &n, &k);
	rep(i, n){
		scanf("%d", w + i + 1);
	}
	rep(i, n){
		w[i + 1] += w[i];
	}
	int l = 0, r = 1e9;
	while(r - l > 1){
		int m = (r + l) / 2;
		if(judge(m)){
			r = m;
		}
		else{
			l = m;
		}
	}
	printf("%d\n", r);
	return 0;
}