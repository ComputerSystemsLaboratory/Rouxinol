#include <iostream>
#include <vector>
#include <climits>
using namespace std;
#define rep2(x,from,to) for(int x=(from);x<(to);++(x))
#define rep(x,to) rep2(x,0,to)
int cnt = 0;
void merge(vector<int> &a, int left, int mid, int right) {
	int n1 = mid - left;
	int n2 = right - mid;
	vector<int> l(n1+1), r(n2+1);
	rep(i,n1) {
		l[i] = a[left+i];
	}
	rep(i,n2) {
		r[i] = a[mid+i];
	}
	l[n1] = INT_MAX, r[n2] = INT_MAX;
	int i = 0, j = 0;
	rep2(k,left,right) {
		if(l[i] <= r[j]) {
			a[k] = l[i];
			i++;
		} else {
			a[k] = r[j];
			j++;
		}
		cnt++;
	}
}
void merge_sort(vector<int> &a, int left, int right) {
	if(left+1<right) {
		int mid = (left+right) / 2;
		merge_sort(a, left, mid);
		merge_sort(a, mid, right);
		merge(a, left, mid, right);
	}
}
int main() {
	int n;
	cin >> n;
	vector<int> v(n);
	rep(i,n) {
		cin >> v[i];
	}
	merge_sort(v,0,n);
	cout << v[0];
	rep2(i,1,n) {
		cout << " " << v[i];
	}
	cout << endl << cnt << endl;
	return 0;
}