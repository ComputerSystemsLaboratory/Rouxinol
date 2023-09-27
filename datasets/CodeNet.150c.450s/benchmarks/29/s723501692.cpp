#include <bits/stdc++.h>
using namespace std;
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
#define P(x) cout << (x) << endl
#define p(x) cout << (x)
#define all(c) (c).begin(), (c).end()
#define rall(c) (c).rbegin(), (c).rend()
#define vv(type, c, m, n, i) vector<vector<type>> c(m, vector<type>(n, i));
#define rep(i,a,n) for(int i=(a), i##_len=(n); i<i##_len; ++i)
#define rrep(i,a,n) for(int i=(a); i>n; --i)
#define len(x) ((int)(x).size())
#define mp make_pair
#define eb emplace_back
typedef long long ll;
typedef vector<int> vi;
typedef vector<double> vd;
typedef vector<long long> vll;
typedef vector<string> vs;
typedef vector<bool> vb;
int main() {
	int n; cin >> n;
	list<int> li;
	string s;
	int x;
	rep(i, 0, n) {
		cin >> s;
		if(s == "insert") {
			cin >> x;
			li.push_front(x);
		} else if(s == "delete") {
			cin >> x;
			for(list<int>::iterator it = li.begin(); it != li.end(); ++it)
				if(*it == x) {
					li.erase(it);
					break;
				}
		} else if(s == "deleteFirst") {
			li.pop_front();
		} else if(s == "deleteLast") {
			li.pop_back();
		}
	}
	vi v(all(li));
	int len_v = len(v);
	rep(i, 0, len_v) cout << v[i] << (i + 1 == len_v ? "\n" : " ");
	return 0;
}