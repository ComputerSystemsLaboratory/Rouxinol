#include <bits/stdc++.h>

using namespace std;

int minnum(string s)
{
	int n;
	stringstream ss;

	sort(s.begin(), s.end());

	ss << s;
	ss >> n;

	return (n);
}

int maxnum(string s)
{
	int n;
	stringstream ss;

	sort(s.begin(), s.end());
	reverse(s.begin(), s.end());

	ss << s;
	ss >> n;

	return (n);
}

int main()
{
	int n, l;
	string str;

	while (scanf("%d %d", &n, &l), l){
		vector<int> v;

		v.push_back(n);

		for (int i = 0; i < 20; i++){
			stringstream ss;
			ss << setfill('0') << setw(l) << n;

			n = maxnum(ss.str()) - minnum(ss.str());
			v.push_back(n);
		}

		int pos, res, diff;
		bool flag = true;

		for (int i = 0; i < 21; i++){
			for (int j = i + 1; j < 21; j++){
				if (flag && v[i] == v[j]){
					pos = i;
					res = v[i];
					diff = j - i;

					flag = false;
				}
			}
		}

		printf("%d %d %d\n", pos, res, diff);
	}

	return (0);
}