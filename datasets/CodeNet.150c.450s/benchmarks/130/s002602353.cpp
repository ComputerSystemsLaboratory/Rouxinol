#include <iostream>
#include <vector>

using namespace std;
int main() {
	int n, m,sum=0;
	cin >> n;
	cin >> m;
	vector<vector <int> > strA;
	strA.resize(n);
	for (int i = 0; i < n; i++) {
		strA[i].resize(m);
	}
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> strA[i][j];
		}
	}

	vector<int> strb(m);
	for (int i = 0; i < m; i++) {
		cin>>strb[i];
	}

	vector<int> ans(n,0);
	//ans.resize(n);
	

	for (int i = 0; i < n; i++) {
		//sum = 0;
		for (int j = 0; j < m; j++) {
			//sum += strA[i][j] * strb[j];
			ans[i] += strA[i][j] * strb[j];
		}
		//ans[i] = sum;
	}

	for (int i = 0; i < n; i++) {
		cout << ans[i] << endl;
	}

	return 0;

}