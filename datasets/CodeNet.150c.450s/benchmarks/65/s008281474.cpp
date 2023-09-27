#include "bits/stdc++.h"
using namespace std;
#ifdef _DEBUG
#include "dump.hpp"
#else
#define dump(...)
#endif

//#define int long long
#define rep(i,a,b) for(int i=(a);i<(b);i++)
#define rrep(i,a,b) for(int i=(b)-1;i>=(a);i--)
#define all(c) begin(c),end(c)
const int INF = sizeof(int) == sizeof(long long) ? 0x3f3f3f3f3f3f3f3fLL : 0x3f3f3f3f;
const int MOD = (int)(1e9) + 7;
const double PI = acos(-1);
const double EPS = 1e-9;
template<class T> bool chmax(T &a, const T &b) { if (a < b) { a = b; return true; } return false; }
template<class T> bool chmin(T &a, const T &b) { if (a > b) { a = b; return true; } return false; }
struct Card {
	char c;
	int v;
	Card(){}
	Card(char c, int v) :c(c), v(v) {}
	bool operator>(const Card &p) const{
		return v > p.v;
	}
	bool operator==(const Card &p)const {
		return c == p.c&&v == p.v;
	}

};
ostream &operator<<(ostream &os, const Card &p) {
	os << p.c << p.v;
	return os;
}
void BubbleSort(vector<Card>v) {
	vector<Card>w(v);
	for (int i = 0; i < w.size(); i++) {
		for (int j = w.size() - 1; j > i; j--) {
			if (w[j - 1] > w[j])swap(w[j - 1], w[j]);
		}
	}
	rep(i, 0, w.size())cout << w[i] << (i == w.size() - 1 ? '\n' : ' ');

	for(int i=0;i<w.size()-1;i++)for(int j=i+1;j<w.size();j++)
		for(int a=0;a<w.size()-1;a++)for(int b=a+1;b<w.size();b++)
			if (w[i] == v[b] && w[j] == v[a] && w[i].v == w[j].v) {
				dump(i, j, a, b);
				cout << "Not stable" << endl;
				return;
			}
	cout << "Stable" << endl;
	return;
}

void SelectionSort(vector<Card>v) {
	vector<Card>w(v);
	rep(i, 0, w.size()) {
		int index = i;
		rep(j, i + 1, w.size())if (w[index] > w[j])index = j;
		swap(w[index], w[i]);
	}

	rep(i, 0, w.size())cout << w[i] << (i == w.size() - 1 ? '\n' : ' ');

	for (int i = 0; i<w.size() - 1; i++)for (int j = i + 1; j<w.size(); j++)
		for (int a = 0; a<w.size() - 1; a++)for (int b = a+1; b<w.size(); b++)
			if (w[i] == v[b] && w[j] == v[a] && w[i].v == w[j].v) {
				cout << "Not stable" << endl;
				return;
			}
	cout << "Stable" << endl;
	return;
}

signed main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int N; cin >> N;
	vector<Card>cards;
	rep(i, 0, N) {
		char c; int v;
		cin >> c >> v;
		cards.emplace_back(Card(c, v));
	}
	BubbleSort(cards);
	SelectionSort(cards);
	return 0;
}