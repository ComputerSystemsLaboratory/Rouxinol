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

static const int MAX_N = 500000;
static const int INF = 1000000000 + 10000;
int a[MAX_N], l[MAX_N / 2 + 2], r[MAX_N / 2 + 2];
int cnt = 0;

//[left, right)
//[left, mid), [mid, right)
void merge(int arr[], int left, int mid, int right) {
	int n1 = mid - left;
	int n2 = right - mid;
	//[0, 5)
	//[0, 2), [2, 5)
	//0,1 : 2,3,4
	//n1 = 2 - 0 = 2
	//n2 = 4 - 2 = 2
	rep(i,0,n1)
	{
		l[i] = arr[left + i];
	}
	rep(i,0,n2)
	{
		r[i] = arr[mid + i];
	}
	l[n1] = INF;
	r[n2] = INF;
	int i = 0, j = 0;
	rep(k,left,right)	//n1+n2 == right - left
	{
		if (l[i] <= r[j]) {
			arr[k] = l[i++];
			cnt++;
		} else {
			arr[k] = r[j++];
			cnt++;
		}
	}
}

void mergeSort(int arr[], int left, int right) {
	if (left + 1 < right) {	//要素数2以上
		int mid = (left + right) / 2;
		mergeSort(arr, left, mid);
		mergeSort(arr, mid, right);
		merge(arr, left, mid, right);
	}
}

void solve() {
	int n;
	scanf("%d", &n);
	rep(i,0,n)
	{
		scanf("%d", &a[i]);
	}
	mergeSort(a, 0, n);
	int ins = 0;
	rep(i,0,n)
	{
		if (ins++ > 0) {
			printf(" ");
		}
		printf("%d", a[i]);
	}
	printf("\n%d\n", cnt);
}
int main() {
	solve();
	return 0;
}

