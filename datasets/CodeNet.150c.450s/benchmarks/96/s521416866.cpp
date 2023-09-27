#include "bits/stdc++.h"
#include<unordered_map>
#pragma warning(disable:4996)
using namespace std;

const int My_Inf=2147483647;
const long long int My_LInf=9223372036854775807;

vector<string>sts(10);

int main() {
	sts[1] = ".,!? ";
	sts[2] = "abc";
	sts[3] = "def";
	sts[4] = "ghi";
	sts[5] = "jkl";
	sts[6] = "mno";
	sts[7] = "pqrs";
	sts[8] = "tuv";
	sts[9] = "wxyz";
	int n; cin >> n;
	while (n--) {
		string st; cin >> st;
		int select = 0;
		int now = -1;
		for (int i = 0; i < st.size(); ++i) {
			if (st[i] == '0') {
				if (select) {
					cout << sts[select][now];
				}
				select = 0;
				now = -1;
			}
			else {
				select = (st[i]-'0');
				now++;
				now %= sts[select].size();
				
			}
		}
		cout << endl;
	}
	return 0;
}