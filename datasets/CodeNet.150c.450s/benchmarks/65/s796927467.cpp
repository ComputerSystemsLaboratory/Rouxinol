#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>
#include <cmath>
#include <iomanip>
#include <sstream>

#define REP(i,n) for(int i=0;i<n;++i)
#define RREP(i,n) for(int i=n-1;i>=0;--i)
#define FOR(i,m,n) for(int i=m;i<n;++i)
#define RFOR(i,m,n) for(int i=m-1;i>=n;--i)
#define ALL(v) v.begin(),v.end()
#define pb(a) push_back(a)
#define INF 1000000001
#define MOD 1000000007

using namespace std;


void bubbleSort(vector<pair<char,int> > &A, int n) {
	REP(i, n) {
		RFOR(j, n, i + 1) {
			if (A[j].second < A[j - 1].second) {
				A[j].swap(A[j-1]);
			}
		}
	}
	return;
}

void selectionSort(vector<pair<char,int> > &A, int n) {
	REP(i, n) {
		int mini = i;
		FOR(j, i, n) {
			if (A[j].second < A[mini].second) {
				mini = j;
			}
		}
		A[i].swap(A[mini]);
	}
}

int main() {
	vector<pair<char,int> > v,t;
	int n;
	cin >> n;
	REP(i, n) {
		char c;
		cin >> c;
		int a;
		cin >> a;
		v.pb(make_pair(c, a));
	}
	REP(i, n) {
		t.pb(v[i]);
	}
	bubbleSort(t, n);
	REP(i, n) {
		cout << t[i].first<< t[i].second;
		if (i != n - 1) cout << " ";
	}
	cout << endl;
	cout << "Stable" << endl;
	selectionSort(v, n);
	REP(i, n) {
		cout << v[i].first << v[i].second;
		if (i != n - 1) cout << " ";
	}
	cout << endl;
	int flag = 1;
	REP(i, n) {
		if (t[i] != v[i]) {
			flag = 0;
		}
	}
	if (flag) cout << "Stable" << endl;
	else cout << "Not stable" << endl;


	return 0;
}