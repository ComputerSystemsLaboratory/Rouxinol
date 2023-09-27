#include <cstdio>
#include <algorithm>
using namespace std;

#define M 1000000

int odd[M + 10], all[M + 10];

void update(int *ar, int x){
	for(int i = x; i <= M; ++i){
		ar[i] = min(ar[i], ar[i - x] + 1);
	}
}

int main(){
	for(int i = 1; i <= M; ++i){
		odd[i] = all[i] = 10000000;
	}

	for(int i = 1; ; ++i){
		int x = i * (i + 1) * (i + 2) / 6;
		if(x > M){ break; }
		update(all, x);
		if(x & 1){ update(odd, x); }
	}
	
	int n;
	while(scanf("%d", &n), n){
		printf("%d %d\n", all[n], odd[n]);
	}
}