#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
typedef long long LL;
LL A[100000 + 10];
int n, k;
//?¨?????£??´§????¨?
bool check(LL P) {
	int cnt = k;
	for (int i = 0; i < n; ) {
		LL t = P;
		cnt--;
		// ??????????????¨?????????????????????????????§?£??????????????£?????´§???
		if (cnt < 0)
			return false;
		while (i < n && t >= 0) {
			// ?????????????????\?£???????????´§???
			if (t >= A[i])
				t -= A[i],i++;
			//?£????????????¨???????????????????£?
			if (t < A[i])
				break;
		}
	}
	return true;
}
// ????????????P???????°????
LL BinarySearch(LL sum) {
	LL left = 0, right = sum;
	LL mid;
	while (left + 1 < right) {
		mid = (left + right) / 2;
		//?????\?£??\??´§???
		if (check(mid))
			right = mid;
		else
			left = mid;
	}

	return right;
}
int main() {
	LL sum = 0;
	scanf("%d %d", &n, &k);
	for (int i = 0; i < n; i++) {
		scanf("%lld", &A[i]);
		sum += A[i];
	}
	LL P = BinarySearch(sum);
	printf("%lld\n", P);
	return 0;
}