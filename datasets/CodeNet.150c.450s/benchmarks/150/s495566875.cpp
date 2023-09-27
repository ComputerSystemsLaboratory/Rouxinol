#include <iostream>
#include <vector>
using namespace std;
#define rep2(x,from,to) for(int x=(from);x<(to);++(x))
#define rep(x,to) rep2(x,0,to)
int n;
vector<int> cnt(10010);
void countingSort(vector<int> &a, vector<int> &b, int k) {
	rep(i,k+2) {
		cnt[i] = 0;
	}
	rep(j,n) {
		cnt[a[j]]++;
	}
	rep2(i,1,k+2) {
		cnt[i] += cnt[i-1];
	}
	for(int j=n-1; j>=0; --j) {
		b[cnt[a[j]]-1] = a[j];
		cnt[a[j]]--;
	}
}
int main() {
	cin >> n;
	int max = 0;
	vector<int> a(n);
	rep(i,n) {
		cin >> a[i];
		if(a[i] > max) max = a[i];
	}
	vector<int> b(n);
	countingSort(a,b,max);
	cout << b[0];
	rep2(i,1,n) {
		cout << " " << b[i];
	}
	cout << endl;
	return 0;
}