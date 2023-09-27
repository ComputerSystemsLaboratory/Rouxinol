#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

typedef vector<int> vi;
unordered_map<int, bool> memo;

bool solve(size_t p, int t, vi &A) {
	
	long key = p + 1 + ((t + 1) << 16);
	auto i = memo.find(key);
	if (i != memo.end())
		return (*i).second;

	bool res;
	if (t == 0)
		res = true;
	else if (p == A.size())
		res = false;
	else 
		res = solve(p + 1, t - A[p], A) ? true : solve(p + 1, t, A);

	memo[key] = res;
	return res;
}

int main()
{
	int n, q, m;

	cin >> n;
	vi A(n);
	for (int &x: A)
		cin >> x;
	
	cin >> q;
	while (q--) {
		cin >> m;
		cout << (solve(0, m, A) ? "yes" : "no") << endl;
	}

}

