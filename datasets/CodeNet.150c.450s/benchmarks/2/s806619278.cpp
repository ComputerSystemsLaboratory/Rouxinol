#include <iostream>
#include <ios>
#include <vector>
using namespace std;
#define FOR(i, s, e) for(int i = s; i < e; ++i)
typedef vector<long> vec;

int Partition(vec& vA, int p, int r)
{
	int x = vA[r];
	int i = p - 1;
	for (int j = p; j < r; ++j){
		if (vA[j] <= x){
			++i;
			swap(vA[i], vA[j]);
		}
	}
	swap(vA[i + 1], vA[r]);
	return i + 1;
}

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, v;
	cin >> n;
	vec vA(n, 0);
	FOR(i, 0, n) cin >> vA[i];
	int x = Partition(vA, 0, n - 1);
	FOR(i, 0, n){
		if (i == x) cout << "[" << vA[i] << "]";
		else cout << vA[i];
		if (i < n - 1)
			cout << " ";
	}
	cout << "\n";
	return 0;
}