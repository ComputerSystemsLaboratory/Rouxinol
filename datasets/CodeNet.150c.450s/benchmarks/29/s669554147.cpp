#include<iostream>
#include <climits>
#include<vector>
#include<list>
#include<numeric>
#include<algorithm>
#include<string>
#include<cmath>
#include<set>
#include<map>
#include<stack>
#include<queue>
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) for(int i=0;i<(n);i++)
using namespace std;
typedef long long ll;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	int n;
	cin >> n;
	list<ll> lst;
	map<ll, int> num;
	REP(i, n) {
		string s;
		cin >> s;
		if (s == "insert") {
			ll x;
			cin >> x;
			lst.push_front(x);
			num[x]++;
		}
		if (s == "delete") {
			ll x;
			cin >> x;
			if (num[x]) {
				list<ll>::iterator itr;
				for (itr = lst.begin(); itr != lst.end();itr++) {
					if (*itr == x) {
						lst.erase(itr);
						num[x]--;
						break;
					}
				}
			}
		}
		if (s == "deleteFirst") {
			num[*(lst.begin())]--;
			lst.pop_front();
		}
		if (s == "deleteLast") {
			num[*(--lst.end())]--;
			lst.pop_back();
		}
	}
	list<ll>::iterator itr;
	for (itr = lst.begin();itr != lst.end();itr++) {
		if (itr != --lst.end()) cout << *itr << " ";
		else cout << *itr << "\n";
	}

	return 0;
}
