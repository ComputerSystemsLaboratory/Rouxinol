#include <iostream>
#include <string>
#include <stack>
#include <queue>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <algorithm>

#include <cstdio>

using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define repc(i, s, n) for (int i = (s); i <= (n); i++)
#define rrep(i, n) for (int i = (n) - 1; i >= 0; i--)
#define rrepc(i, s, n) for (int i = (s); i >= (n); i--)
#define print_array(ary, size) cout << ary[0]; rep1(i, 1, size - 1) cout << ' ' << ary[i]; cout << endl;
typedef long long ll;
typedef unsigned long long ull;

vector<int> SNS[100000];
int Group[100000] = { 0 };

int main()
{
	int n, m, q, s, t;
	int man1, man2;
	int grNo = 1;
	int current, next;
	queue<int> Q;
	vector<int>::iterator it;
	
	cin >> n >> m;
	rep(i, m) {
		cin >> man1 >> man2;
		SNS[man1].push_back(man2);
		SNS[man2].push_back(man1);
	}

	rep(i, n) {
		if (Group[i] == 0) {
			Q.push(i);
			Group[i] = grNo;

			while (!Q.empty()) {
				current = Q.front();

				for (it = SNS[current].begin(); it != SNS[current].end(); it++) {
					next = *it;
					if (Group[next] == 0) {
						Q.push(next);
						Group[next] = grNo;
					}
				}

				Q.pop();
			}

			grNo++;
		}
	}

	cin >> q;
	rep(i, q) {
		cin >> s >> t;
		if (Group[s] == Group[t]) cout << "yes" << endl;
		else cout << "no" << endl;
	}

	return 0;
}
