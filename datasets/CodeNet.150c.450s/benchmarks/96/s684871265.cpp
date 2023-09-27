#include <bits/stdc++.h>
#define FOR(i,a,n) for(int i=(a); i<(n); i++)
#define rep(i,n) for(int i=0; i<(n); i++)
#define per(i,n) for(int i=(n)-1; i>=0; i--)
#define all(v) v.begin(), v.end()
#define debug(var) do{cout << #var << " : "; print(var); } while(0)
using namespace std;
typedef long long ll;
void print() { cout << endl; }
template <class Head, class... Tail> void print(Head&& head, Tail&&... tail) { cout << head; if (sizeof...(tail) != 0) cout << " "; print(forward<Tail>(tail)...); }
template <class T> void print(vector<T> &vec) { for (auto& a : vec) { cout << a; if (&a != &vec.back()) cout << " "; } cout << endl; }
template <class T> void print(vector<vector<T>> &df) { for (auto& vec : df) { print(vec); } }
const int INF = 1e9;
const int MOD = 1e9+7;

const string button[] = {".,!? ", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n; cin >> n;
	rep(nn, n) {
		string s; cin >> s;
		string ans;
		int loc = -1;
		int pushed = 0;

		rep(i, s.size()) {
			char c = s[i];
			int num = c - '0';
			if (num==0) {
				if (loc==-1) continue;
				pushed %= button[loc].size();
				ans += button[loc][pushed];
				loc = -1;
				pushed = 0;
			}
			num--;
			if (loc==-1) loc=num;
			else pushed++;
		}

		cout << ans << endl;
	}
}
