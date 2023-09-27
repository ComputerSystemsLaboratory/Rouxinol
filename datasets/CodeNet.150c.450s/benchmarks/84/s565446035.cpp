#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
#include<list>
#include<string>
#include<cstring>
#include<cstdlib>
#include<cstdio>
//#include<cmath>
using namespace std;

typedef long long llong;
const int INFTY = 2000000001;
int S[500010], n;
llong cmp;

int merge(int left, int mid, int right)
{
	int n1 = mid - left, n2 = right - mid;
	llong ans = 0;
	vector<int>L(n1 + 1), R(n2 + 1);
	for (int i = 0; i < n1; i++)
		L[i] = S[left + i];
	for (int i = 0; i < n2; i++)
		R[i] = S[mid + i];
	L[n1] = R[n2] = INFTY;
	int i = 0, j = 0;
	for (int k = left; k < right; k++) {
		if (L[i] <= R[j]) {
			S[k] = L[i];
			i += 1;
		}
		else {
			S[k] = R[j];
			j += 1;
			ans += n1 - i;
			cmp += n1 - i;
		}
	}
	return ans;
}

int mergeSort(int left, int right)
{
	llong l = 0, r = 0, m = 0;
	if (left + 1 < right) {
		int mid = (left + right) / 2;
		l = mergeSort(left, mid);
		r = mergeSort(mid, right);
		m = merge(left, mid, right);
		return l + r + m;
	}
	else
		return 0;
}

int main(void)
{
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> S[i];
	//cmp = 
	mergeSort(0, n);
	cout << cmp << endl;
	return 0;
}
