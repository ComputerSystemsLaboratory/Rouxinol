#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>


using namespace std;
typedef long long int llint;
typedef vector<llint>::iterator it;



void quicker_settings() {
	std::cin.tie(0);
	std::ios::sync_with_stdio(false);
}

llint merge(vector<llint> &V, vector<llint> &L, vector<llint> &R) {
	it l = L.begin();
	it r = R.begin();
	llint c = 0;
	for (it v = V.begin(); v != V.end(); ++v) {
		if (r == R.end() || l != L.end() && *l < *r) {
			*v = *l;
			++l;
		}
		else {
			*v = *r;
			c += (L.size() + distance(R.begin(), r) - distance(V.begin(), v));
			++r;
		}
	}
	return c;
}

llint merge_idx(vector<llint> &v) {
	if (v.size() == 1)
		return 0;
	vector<llint> L;
	vector<llint> R;
	L.assign(v.begin(), v.begin() + (v.size() / 2));
	R.assign(v.begin() + (v.size() / 2), v.end());
	llint idx = 0;
	idx += merge_idx(L);
	idx += merge_idx(R);
	idx += merge(v, L, R);
	return idx;
}



int main() {
	llint n;
	cin >> n;

	vector<llint> v;
	v.resize(n, 0);

	for (llint i = 0; i < n; i++) {
		cin >> v[i];
	}
	llint c = merge_idx(v);

	cout << c << endl;

	return 0;
}