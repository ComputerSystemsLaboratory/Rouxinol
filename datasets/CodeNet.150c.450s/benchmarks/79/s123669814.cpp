#include <bits/stdc++.h>
const long long INF = LLONG_MAX/2;
#define FOR(i, r, n) for(int i=(r); i<(n); i++) 
#define REP(i, n) FOR(i, (0), n)
#define ll long long int
template<typename T>
void remove(std::vector<T>& vector, unsigned int index)
{
	vector.erase(vector.begin() + index);
}

using namespace std;
ll ans = 0;

ll n, r, a, b;
vector<ll> v, w;

int main()
{
	while (true){
		cin >> n >> r;
		if (!n&&!r) return 0;
		w.resize(n);
		v.resize(n);
		FOR(i, 1, n + 1) v[i - 1] = n - i + 1;
		REP(i, r)
		{
			cin >> a >> b;
			REP(j, b)
			{
				w[j] = v[j + a - 1];
			}
			REP(j, a - 1)
			{
				w[j + b] = v[j];
			}
			FOR(j, a + b - 1, n)
			{
				w[j] = v[j];
			}
			v.clear();
			copy(w.begin(), w.end(), back_inserter(v));
		}
		cout << v[0] << endl;
	}
}