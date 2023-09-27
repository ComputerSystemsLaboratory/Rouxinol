#include <bits/stdc++.h>
using namespace std;

int BIT[200001] = {0};
int N = 200000;


int n;
int a[200001];
int b[200001];

int sum(int i){
	int s = 0;
	while(i > 0){
		s += BIT[i];
		i -= i & -i;
	}
	return s;
}
void add(int i,int x){
	while(i <= N){
		BIT[i] += x;
		i += i & -i;
	}
}

int main(){
	scanf("%d",&n);
	for(int i = 0; i < n; i++){
		scanf("%d",&a[i]);
		b[i] = a[i];
	}
	sort(b,b+n); // n log n
	for(int i = 0; i < n; i++){ // 0 <= a <= 1e9 -> 1 <= a <= 200000
		int* ptr = lower_bound(b,b+n,a[i]);
		int idx = ptr - b;
		a[i] = idx + 1;
	}

	long long int ans = 0;

	for(int i = 0; i < n; i++){
		ans += i - sum(a[i]);
		add(a[i],1);
	}
	printf("%lld\n",ans);

	return 0;
}

