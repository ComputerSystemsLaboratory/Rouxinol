#include<iostream>
using namespace std;
#include <vector>
#define COT_NUM 26
#define re(i,n) for(int i = 0; i < n; i++)

int main() {
	int d;
	int score = 0;
	cin >> d;
	vector<vector<int>> s(d, vector<int>(COT_NUM));
	vector<int> c(COT_NUM);
	vector<int> t(d);
	vector<int> w(COT_NUM, 0);

	re(i, COT_NUM) cin >> c[i];
	re(i, d) {
		re(j, COT_NUM) cin >> s[i][j];
	}
	re(i, d) {
		cin >> t[i];
		t[i]--;
	}
	
	re(i, d) {
		score += s[i][t[i]];
		w[t[i]] = 0;
		re(j, COT_NUM) w[j] += !(j == t[i]);
		re(j, COT_NUM) score -= c[j] * w[j];
		cout << score << endl;;
	}



	return 0;
}