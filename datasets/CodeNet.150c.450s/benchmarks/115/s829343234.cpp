#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int LCS(string p, string q) {
	vector<vector<int> > f(p.size()+1, vector<int>(q.size()+1,0));
	int t;
	for (int i = 1; i <= p.size(); i++) {
		for (int j = 1; j <= q.size(); j++) {
			if (p[i-1] == q[j-1])
				f[i][j] = f[i - 1][j - 1] + 1;
			else if (f[i][j - 1] > f[i - 1][j])
				f[i][j] = f[i][j - 1];
			else
				f[i][j] = f[i - 1][j];
		}
	}
	return f[p.size()][q.size()];
}

int main() {
	int n;
	string p[300];
	cin >> n;
	for (int i = 0; i < n; i ++) {
		cin >> p[2*i] >> p[2*i + 1];
	}
	for (int i = 0; i < n; i++) {
		cout << LCS(p[2*i], p[2 * i + 1])<<endl;
	}
	return 0;
}