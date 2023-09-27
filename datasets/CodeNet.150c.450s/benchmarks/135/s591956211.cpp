#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <climits>
#include <vector>
#include <string>
#include <queue>
#include <deque>
#include <list>
#include <stack>
#include <set>
#include <map>
#include <algorithm>

#define int long long
#define MOD7 1000000007
#define MOD9 1000000009

#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(a) (a).begin(), (a).end()

using namespace std;

int nextInt() {int a; cin >> a; return a;}
char nextChar() {char a; cin >> a; return a;}
double nextDouble() {double a; cin >> a; return a;}
string nextString() {string a; cin >> a; return a;}

void inputVector(vector<int> &v, int &n) {rep(i,n){v.push_back(nextInt());}}
void inputVector(vector<double> &v, int &n) {rep(i,n){v.push_back(nextDouble());}}
void inputVector(vector<string> &v, int &n) {rep(i,n){v.push_back(nextString());}}

signed main() {
	int N, M;
	cin >> N >> M;
	
	while (N != 0) {
		vector<int> h, w;
		inputVector(h, N);
		inputVector(w, M);

		map<int, int> hm, wm;

		for (int i = 0; i < h.size(); i++) {
			int len = 0;
			for (int j = i; j < h.size(); j++) {
				len += h[j];
				if (hm.find(len) == hm.end()) {
					hm[len] = 0;
				}
				hm[len]++;
			}
		}

		for (int i = 0; i < w.size(); i++) {
			int len = 0;
			for (int j = i; j < w.size(); j++) {
				len += w[j];
				if (wm.find(len) == wm.end()) {
					wm[len] = 0;
				}
				wm[len]++;
			}
		}

		auto ith = hm.begin();
		auto itw = wm.begin();

		int ret = 0;
		while (true) {
			int hn = (*ith).first;
			int wn = (*itw).first;

			if (hn == wn) {
				ret += (*ith).second * (*itw).second;
				ith++;
				if (ith == hm.end()) break;
			} else if (hn < wn) {
				ith++;
				if (ith == hm.end()) break;
			} else {
				itw++;
				if (itw == wm.end()) break;
			}
		}

		cout << ret << endl;

		cin >> N >> M;
	}

    return 0;
}