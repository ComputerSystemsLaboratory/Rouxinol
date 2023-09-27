#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
#define FOR(i,n) for(int i = 0; i < n; ++i)
typedef vector<long> vec;
int cnt = 0;

void Merge(vec& vA, int l, int m, int r){
	int d1 = m - l,
		d2 = r - m;
	vec vL(d1 + 1, 0);
	vec vR(d2 + 1, 0);
	int i, j, k;
	FOR(i, d1) vL[i] = vA[l + i];
	FOR(i, d2) vR[i] = vA[m + i];
	vL[d1] = LONG_MAX;
	vR[d2] = LONG_MAX;
	i = j = 0;
	for (k = l; k < r; ++k){
		++cnt;
		if (vL[i] <= vR[j]){
			vA[k] = vL[i];
			++i;
		}
		else{
			vA[k] = vR[j];
			++j;
		}
	}
}

void MergeSort(vec& vA, int l, int r){
	if (l >= r - 1)	return;
	int m = (l + r) / 2;
	MergeSort(vA, l, m);
	MergeSort(vA, m, r);
	Merge(vA, l, m, r);
}

int main()
{
	int n;
	cin >> n;
	vec vA(n, 0);
	FOR(i, n) cin >> vA[i];
	MergeSort(vA, 0, n);
	FOR(i, n){
		cout << vA[i];
		if (i != n - 1) cout << " ";
	}
	cout << "\n" << cnt << "\n";

	return 0;
}