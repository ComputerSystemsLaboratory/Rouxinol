#include <bits/stdc++.h>
#define INF 1000000001
#define MAX 200000
using namespace std;
int N, S[MAX];
long long res;

void Merge(int left, int mid, int right) {
	int n1 = mid - left, n2 = right - mid;
	vector<int> L(n1 + 1, INF), R(n2 + 1, INF);
	for (int i = 0; i < n1; i++)
		L[i] = S[left + i];
	for (int i = 0; i < n2; i++)
		R[i] = S[mid + i];
	for (int i = 0, j = 0, k = left; k < right; k++) {
		if (L[i] <= R[j]) {
			S[k] = L[i];
			i++;
		}
		else {
			S[k] = R[j];
			j++;
			res += n1 - i;
		}
	}
}

void MergeSort(int left, int right) {
	if (left + 1 < right) {
		int mid = (left + right) / 2;
		MergeSort(left, mid);
		MergeSort(mid, right);
		Merge(left, mid, right);
	}
}

int main()
{
	cin >> N;
	for (int i = 0; i < N; i++)
		cin >> S[i];
	MergeSort(0, N);
	cout << res << endl;
	return 0;
}