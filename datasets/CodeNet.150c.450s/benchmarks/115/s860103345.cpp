#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	int q, t1, t2;
	string s1, s2;
	const int maxS = 1000;
	int m[maxS][maxS];

	cin >> q;

	for (int i = 0; i < q; i++) {

		for (int i = 0; i < maxS; i++)
			for (int j = 0; j < maxS; j++)
				m[i][j] = 0;

		cin >> s1 >> s2;

		t1 = s1.size() - 1;
		t2 = s2.size() - 1;

		if (s1[0] == s2[0])
			m[0][0] = 1;

		for (int i = 0; i < t1; i++) {
			int f = 0;
			if (s1[i + 1] == s2[0])
				f = 1;
			m[i + 1][0] = max(m[i][0], f);
		}

		for (int j = 0; j < t2; j++) {
			int f = 0;
			if (s2[j + 1] == s1[0])
				f = 1;
			m[0][j + 1] = max(m[0][j], f);
		}

		for (int i = 0; i < t1; i++) {
			for (int j = 0; j < t2; j++) {
				if (s1[i + 1] == s2[j + 1])
					m[i + 1][j + 1] = m[i][j] + 1;
				else
					m[i + 1][j + 1] = max(m[i][j + 1], m[i + 1][j]);
			}
		}

		cout << m[t1][t2] << endl;
	}
	return 0;
}
