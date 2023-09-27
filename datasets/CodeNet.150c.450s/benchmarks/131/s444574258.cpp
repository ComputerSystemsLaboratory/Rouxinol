#include <bits/stdc++.h>
using namespace std;

int main()
{
	int res[3], ma, mi, a0;
	size_t L;
	bool flag;
	string str;
	vector<string> a;
	while (cin >> a0 >> L, a0 || L) {
		str = to_string(a0);
		if (str.size() < L)
			str = string(L - str.size(), '0') + str;
		a.push_back(str);
		flag = true;
		do {
			sort(str.begin(), str.end());
			mi = stoi(str);
			sort(str.begin(), str.end(), greater<char>());
			ma = stoi(str);
			str = to_string(ma - mi);
			if (str.size() < L)
				str = string(L - str.size(), '0') + str;
			a.push_back(str);
			for (size_t j = 0; j < a.size() - 1; j++) {
				if (a[j] == a.back()) {
					res[0] = j;
					res[1] = stoi(a[j]);
					res[2] = a.size() - j - 1;
					flag = false;
				}
			}
		} while (flag);
		cout << res[0] << ' ' << res[1] << ' ' << res[2] << endl;
		a.clear();
	}
	return 0;
}