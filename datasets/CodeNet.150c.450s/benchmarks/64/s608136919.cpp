#include <iostream>
#include <map>
#include <unordered_map>
#include <iterator>
using namespace std;

typedef multimap<int, int> mm;
typedef mm::reverse_iterator ri;
unordered_map<int, bool> memo;

bool solve(ri p, int t, mm &A) {
	
	long key = distance(A.rbegin(), p) + 1 + ((t + 1) << 16);
	auto i = memo.find(key);
	if (i != memo.end())
		return (*i).second;

	bool res;
	int x = (*p).first;
	if (p == A.rend())
		res = false;
	else if (x == t)
		res = true;
	else if ((*p).second < t)
		res = false;
	else if (x <= t)
		res = solve(next(p, 1), t - x, A) ? true : solve(next(p, 1), t, A);
	else
		res = solve(make_reverse_iterator(A.upper_bound(t)), t, A);

	memo[key] = res;
	return res;
}

int main()
{
	int n, q, m, sum = 0;

	cin >> n;
	mm A;
	while (n--) {
		cin >> m;
		A.insert({m, 0});
	}

	for (auto &x:A) {
		sum += x.first;
		x.second = sum;
	}
	
	cin >> q;
	while (q--) {
		cin >> m;
		cout << (solve(A.rbegin(), m, A) ? "yes" : "no") << endl;
	}
}
