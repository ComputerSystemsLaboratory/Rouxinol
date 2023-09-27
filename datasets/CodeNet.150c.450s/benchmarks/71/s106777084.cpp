/*
 * http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0008
 */
#include <iostream>
#include <vector>

using namespace	std;

int
main()
{
	ios_base::sync_with_stdio(false);

	vector<int> m(51);
	for (int i = 0; i < 10000; i++) {
		m[ i % 10 + i / 10 % 10 + i / 100 % 10 + i / 1000 ]++;
	}

	int n;
	while (cin >> n) {
		cout << m[n] << endl;
		cin.ignore();
	}
	return 0;
}