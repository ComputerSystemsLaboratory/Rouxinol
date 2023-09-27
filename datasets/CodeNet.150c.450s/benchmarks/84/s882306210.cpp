#define MYDEBUG
//
#include <bits/stdc++.h>
#ifdef MYDEBUG
#define dbp(x) cout<<#x<<": "<<x<<endl
#define dbp2(x,y) cout<<#x<<","<<#y<<": "<<x<<","<<y<<endl
#define dbp3(x,y,z) cout<<#x<<","<<#y<<","<<#z<<": "<<x<<","<<y<<","<<z<<endl
#define dbp4(w,x,y,z) cout<<#w<<","<<#x<<","<<#y<<","<<#z<<": "<<w<<","<<x<<","<<y<<","<<z<<endl
#define ifcin(x) std::ifstream cin(x)
#else
#define dbp(x)
#define dbp2(x,y)
#define dbp3(x,y,z)
#define dbp4(w,x,y,z)
#define ifcin(x)
#endif
#define ll long long
#define all(x) x.begin(), x.end()
#define rep(i, from, to) for(int i=from; i<to; ++i)
#define REP(i, from, to) for(int i=from; i<=to; ++i)
using namespace std;
template<typename T>
ostream& operator<<(ostream& out, const vector<T>& v) {
	out << "[";
	size_t last = v.size() - 1;
	for (size_t i = 0; i < v.size(); ++i) {
		out << v[i];
		if (i != last) {
			out << ",";
		}
	}
	out << "]";
	return out;
}
template<typename T>
ostream& operator<<(ostream& out, const vector<vector<T> >& v) {
	for (size_t i = 0; i < v.size(); ++i) {
		out << v[i] << endl;
	}
	return out;
}
template<typename T1, typename T2>
ostream& operator<<(ostream& out, const pair<T1, T2>& p) {
	out << "{" << p.first << "," << p.second << "}";
	return out;
}

static const int MAX = 200000;
static const int INF = INT_MAX;
int n, a[MAX], l[MAX / 2 + 2], r[MAX / 2 + 2];
ll inversion = 0;

void merge(int arr[], int left, int right) {
	int mid = (left + right) / 2;
	int n1 = mid - left, n2 = right - mid;
	rep(i,0,n1)
	{
		l[i] = a[left + i];
	}
	rep(j,0,n2)
	{
		r[j] = a[mid + j];
	}
	l[n1] = r[n2] = INF;
	int i = 0, j = 0;
	rep(k,0,right - left)
	{
		if (l[i] <= r[j]) {
			a[left + k] = l[i++];
		} else {
			a[left + k] = r[j++];
			//Lに残った要素の数
			//==r[j]より大きい数の個数
			//==r[j]より左にあるのに大きい(反転している)数
			//各jで反転数(n1-i)を追加
			inversion += n1 - i;
		}
	}
}

void mergeSort(int arr[], int left, int right) {
	int mid = (left + right) / 2;
	if (left + 1 < right) {
		mergeSort(arr, left, mid);
		mergeSort(arr, mid, right);
		merge(arr, left, right);
	}
}

void solve() {
	scanf("%d", &n);
	rep(i,0,n)
	{
		scanf("%d", &a[i]);
	}
	mergeSort(a, 0, n);
	printf("%lld\n", inversion);
}

void printTestCase() {
	int n = 200000;
	int ins = 0;
	printf("%d\n", n);
	rep(i,0,n)
	{
		if (ins++ > 0) {
			printf(" ");
		}
		printf("%d", n - i);
	}
}

int main() {
	solve();
//	printTestCase();
	return 0;
}

