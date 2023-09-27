#include "iostream"
#include "climits"
#include "list"
#include "queue"
#include "stack"
#include "set"
#include "functional"
#include "algorithm"
#include "string"
#include "map"
#include "iomanip"
#include "random"

using namespace std;

const long long int MOD = 1000000007;
const long double EPS = 0.00000001;
const long double PI = 3.1415926535897932384626433;

long long int N, M, K, H, W, L, R;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> N;
	for (int i = 0; i < N; i++) {
		string s;
		cin >> s;
		set<string>st;
		M = s.size();
		for (int j = 0; j < M - 1; j++) {
			string t;
			for (int k = 0; k <= j; k++) {
				t += s[k];
			}
			string u;
			u = t;
			reverse(u.begin(), u.end());
			string v, w;
			for (int k = j + 1; k < M; k++) {
				v += s[k];
			}
			w = v;
			reverse(w.begin(), w.end());
			st.insert(t + v);
			st.insert(t + w);
			st.insert(u + v);
			st.insert(u + w);
			st.insert(v + t);
			st.insert(w + t);
			st.insert(v + u);
			st.insert(w + u);
		}
		cout << st.size() << endl;
	}
	return 0;
}