#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (n) ; i++)
constexpr auto INF = 2147483647;
typedef long long ll;
const int MAX = 200001;

int n;
int A[MAX];
int L[MAX / 2 + 2], R[MAX / 2 + 2];

ll Merge(int left,int mid,int right){
	int n1 = mid - left;
	int n2 = right - mid;
	ll cnt = 0;
	rep(i, n1) L[i] = A[left + i];
	rep(i, n2) R[i] = A[mid + i];
	L[n1] = R[n2] = INF;
	int i, j;
	i = j = 0;
	for (int k = left; k < right; k++) {
		if (L[i] <= R[j]) A[k] = L[i++];
		else {
			A[k] = R[j++];
			cnt += n1 - i;
		}
	}
	return cnt;
}


ll MergeSort(int left, int right){
	ll v1, v2, v3;
	int mid;
	if (left + 1 < right) {
		mid = (left + right) / 2;
		v1 = MergeSort(left, mid);
		v2 = MergeSort(mid, right);
		v3 = Merge(left, mid, right);
		return v1 + v2 + v3;
	}
	else return 0;
}

int main() {
	cin >> n;
	rep(i, n) cin >> A[i];

	ll ans = MergeSort(0, n);
	cout << ans << endl;


	return 0;
}
