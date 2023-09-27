#include <bits/stdc++.h>

#define rep(i, first, to) for(ll i = first; i < to; ++i)

using namespace std;
typedef long long ll;

struct HashSet {
	string data[(int)1e6];
	const int MAXN = (int)1e6;
	const string INIT = "-1";
	HashSet(){
		rep(i, 0, MAXN) {
			data[i] = INIT;
		}
	}
	bool find(string s) {
		int j = h(s);
		//cout << "codefind : " << j << endl;
		rep(i, 0, MAXN) {
			if (data[j] == INIT) return false;
			if (data[j] == s) return true;
			j = (j + 1) % MAXN;
		}
		return false;
	}
	void insert(string s) {
		int j = h(s);
		//cout << "codeinsert : " << j << endl;
		rep(i, 0, MAXN) {
			if (data[j] == INIT || data[j] == s) {
				data[j] = s;
				return;
			}
			j = (j + 1) % MAXN;
		}
	}
	int h(string s) {
		int hashcode = 0;
		int j = 1;
		rep(i, 0, s.size()) {
			hashcode += j * h1(s[i]);
			j *= 5;
		}
		hashcode %= MAXN;
		//cout << "hashcode : " << hashcode << endl;
		return hashcode;
	}
	int h1(char c) {
		if ('A' == c) {
			return 1;
		} else if ('G' == c) {
			return 2;
		} else if ('C' == c) {
			return 3;
		} else if ('T' == c) {
			return 4;
		}
	}
};

int n;
HashSet *mySet = new HashSet();
void solve() {
	string op, s;
	cin >> n;
	rep(i, 0, n) {
		cin >> op >> s;
		if (op == "insert") {
			mySet->insert(s);
		} else {
			if (mySet->find(s)) {
				cout << "yes" << endl;
			} else {
				cout << "no" << endl;
			}
		}
	}
	delete mySet;
}
void test() {
	cout << pow(5, 12) << endl;
}

int main() {
	solve();
	//test();
	return 0;
}