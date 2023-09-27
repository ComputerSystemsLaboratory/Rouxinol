#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define V(a) a.begin(), a.end()
typedef vector<int> vi;

int main()
{
	vi a[2], C;

	for (auto &i : a) {
		int n;
		cin >> n;
		i = vi(n);
		for (int &j : i)
			cin >> j;
		sort(V(i));
	}

	set_intersection(V(a[0]), V(a[1]), inserter(C, C.end()));

	cout << C.size() << endl;
}
