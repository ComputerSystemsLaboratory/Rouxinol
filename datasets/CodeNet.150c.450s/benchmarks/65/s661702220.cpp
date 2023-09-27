#include <iostream>
#include <vector>

#define rep(i, first, to) for(ll i = first; i < to; ++i)
#define REP(i, first, to) for(ll i = first; i <= to; ++i)

using namespace std;
typedef long long ll;
typedef pair<int, char> P;

vector<P> a;
int n;
void show(vector<P> ls) {
	rep(i, 0, n - 1) {
		cout << ls.at(i).second << ls.at(i).first << " ";
	}
	cout << ls.at(n - 1).second << ls.at(n - 1).first << endl;
}
void bubble_sort(vector<P> &ls) {
	rep(i, 0, n - 1) {
		bool isOk = true;
		rep(j, 1, n) {
			P p1 = ls.at(j - 1);
			P p2 = ls.at(j);
			if (p1.first > p2.first) {
				swap(ls.at(j - 1), ls.at(j));
				isOk = false;
			}
		}
		if (isOk) break;
	}
}

void selection_sort(vector<P> &ls) {
	rep(i, 0, n - 1) {
		int minj = i;
		rep(j, i + 1, n) {
			if (ls.at(minj).first > ls.at(j).first) {
				minj = j;
			}
		}
		swap(ls.at(minj), ls.at(i));
	}
}

void solve() {
	cin >> n;
	rep(i, 0, n) {
		string s;
		cin >> s;
		a.push_back(make_pair(s[1] - '0', s[0]));
	}
	vector<P> v1 = a;
	vector<P> v2 = a;
	bubble_sort(v1);
	show(v1);
	cout << "Stable" << endl;
	selection_sort(v2);
	show(v2);
	if (v1 != v2) {
		cout << "Not stable" << endl;
	} else {
		cout << "Stable" << endl;
	}
}

int main() {
	solve();
	return 0;
}