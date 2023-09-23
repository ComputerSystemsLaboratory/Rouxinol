#include <iostream>

using namespace std;

int main()
{
	int i, m, s, e, sp;

	cin >> i >> m >> s >> e;
	sp = i + m + s + e;
	cin >> i >> m >> s >> e;
	if (sp > i + m + s + e) cout << sp << endl;
	else cout << i + m + s + e << endl;

	return (0);
}