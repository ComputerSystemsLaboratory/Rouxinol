#include<stdio.h>
#include<algorithm>
#define MAX 100000
int n, k;
long long T[MAX];

int check(long long p){
	int i = 0;
	for (int j = 0; j < k; j++){
		long long s = 0;
		while (s + T[i] <= p){
			s += T[i];
			i++;
			if (i == n)return n;
		}
	}
	return i;
}


int solve(){
	int v;
	long long left = 0;
	long long right = 100000 * 10000;
	long long mid;
	while (right > left + 1){
		mid = (left + right) / 2;
		v = check(mid);
		if (v >= n)right = mid;
		else left = mid;
	}
	return right;
}
int main(){
	scanf("%d %d", &n, &k);
	for (int i = 0; i < n; i++){
		scanf("%d", &T[i]);
	}
	long long p = solve();
	printf("%d\n", p);
	return 0;
}