#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define rep(i,from,to) for(int i=from; i<to; ++i)
#define REP(i,from,to) for(int i=from; i<=to; ++i)
using namespace std;
template<typename T>
ostream& operator<<(ostream& out, const vector<vector<T> >& v) {
	for (size_t i = 0; i < v.size(); ++i) {
		out << v[i] << endl;
	}
	return out;
}
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

const int maxn = 110;
int n;
string c[maxn];
typedef pair<string, int> P;

void print(int arr[maxn], int n) {
	for (int i = 0; i < n - 1; ++i) {
		cout << arr[i] << " ";
	}
	cout << arr[n - 1] << endl;
}

void stable_bubble(P arr[maxn], int n) {
	int cnt = 0;
	int flag = 1;
	while (flag) {
		flag = 0;
		for (int j = n - 1; j >= 1; j--) {
			if (arr[j].first[1] < arr[j - 1].first[1]) {
				swap(arr[j], arr[j - 1]);
				flag = 1;
				cnt++;
			}
		}
	}
}

void stable_selection(P arr[maxn], int n) {
	int cnt = 0;
	REP(i,0,n-1)
	{
		int minj = i;
		REP(j,i,n-1)
		{
			if (arr[j].first[1] < arr[minj].first[1]) {
				minj = j;
			}
		}
		if (i != minj) {
			swap(arr[i], arr[minj]);
			cnt++;
		}
	}
}

void selectionSort(int arr[maxn], int n) {
	int cnt = 0;
	REP(i,0,n-1)
	{
		int minj = i;
		REP(j,i,n-1)
		{
			if (arr[j] < arr[minj]) {
				minj = j;
			}
		}
		if (i != minj) {
			swap(arr[i], arr[minj]);
			cnt++;
		}
	}
	print(arr, n);
	cout << cnt << endl;
}

void bubbleSort(int arr[maxn], int n) {
	int cnt = 0;
	int flag = 1;
	while (flag) {
		flag = 0;
		for (int j = n - 1; j >= 1; j--) {
			if (arr[j] < arr[j - 1]) {
				swap(arr[j], arr[j - 1]);
				flag = 1;
				cnt++;
			}
		}
	}
	print(arr, n);
	cout << cnt << endl;
}

void insertionSort(int arr[maxn], int n) {
	print(arr, n);
	REP(i,1,n-1)
	{
		int v = arr[i];
		int j = i - 1;
		while (j >= 0 && arr[j] > v) {
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = v;
		print(arr, n);
	}
}
P c_bubble[maxn], c_selection[maxn];
void solve() {
	cin >> n;
	rep(i,0,n)
	{
		cin >> c[i];
	}
	rep(i,0,n)
	{
		c_bubble[i] = P(c[i], i);
		c_selection[i] = P(c[i], i);
	}
//	cout << "---bubble---" << endl;
	stable_bubble(c_bubble, n);
//	rep(i,0,n)
//	{
//		cout << c_bubble[i].first << " " << c_bubble[i].second << endl;
//	}
//	cout << "---selection---" << endl;
	stable_selection(c_selection, n);
//	rep(i,0,n)
//	{
//		cout << c_selection[i].first << " " << c_selection[i].second << endl;
//	}
	//bubble
	rep(i,0,n-1)
	{
		cout << c_bubble[i].first << " ";
	}
	cout << c_bubble[n - 1].first << endl;
	cout << "Stable" << endl;
	//selection
	rep(i,0,n-1)
	{
		cout << c_selection[i].first << " ";
	}
	cout << c_selection[n - 1].first << endl;
	rep(i,0,n)
	{
		if (c_selection[i].second != c_bubble[i].second) {
			cout << "Not stable" << endl;
			return;
		}
	}
	cout << "Stable" << endl;
}

int main() {
	solve();
}