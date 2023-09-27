#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
#include<list>
#include<string>
#include<cstring>
#include<cstdlib>
#include<cstdio>
//#include<cmath>
using namespace std;

int main(void)
{
	vector<int> S, T;
	int n, q, m, p, sum = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> m;
		S.push_back(m);
	}
	cin >> q;
	for (int i = 0; i < q; i++) {
		cin >> p;
		T.push_back(p);
	}
	S.push_back(T[0]);
	for (int i = 0; i < q; i++) {
		if (i)
			S[n] = T[i];
		int j;
		for (j = 0; S[j] != T[i]; j++);
		if (j != n)
			sum++;
	}
	cout << sum << endl;
	return 0;
}
