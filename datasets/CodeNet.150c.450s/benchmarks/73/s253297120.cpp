#include <cstdio>
#include <algorithm>

#define rep(i, n) for(int i = 0; i < (n); ++i)

using namespace std;

int n, q;
int t[100001];

void add(int i, int x){
	while(i <= n){
		t[i] += x;
		i += i & -i;
	}
}

int sum(int i){
	int s = 0;
	while(i > 0){
		s += t[i];
		i -= i & -i;
	}
	return s;
}

int main(){
	scanf("%d%d", &n, &q);
	rep(i, q){
		int a, b, c;
		scanf("%d%d%d", &a, &b, &c);
		if(a == 0){
			add(b, c);
		}
		else{
			printf("%d\n", sum(c) - sum(b - 1));
		}
	}
	return 0;
}