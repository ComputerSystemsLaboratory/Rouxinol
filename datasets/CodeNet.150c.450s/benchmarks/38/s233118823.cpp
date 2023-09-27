#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int a, b, c, n, i;
	vector<int> A;
	vector<vector<int> > B;
	cin >> n;
		for (i = 0; i < n; i++) {
			cin >> a >> b >> c;
			A.push_back(a);
			A.push_back(b);
			A.push_back(c);
			sort(A.begin(), A.end());
			B.push_back(A);
			A.clear();
		}
		for (i = 0; i < n; i++) {
			if (B[i][2] * B[i][2] == B[i][0] * B[i][0] + B[i][1] * B[i][1]) cout << "YES" << endl;
			else cout << "NO" << endl;
	}
	return 0;
}