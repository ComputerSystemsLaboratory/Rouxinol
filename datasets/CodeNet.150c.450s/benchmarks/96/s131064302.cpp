#include "bits/stdc++.h"
using namespace std;
int main() {
	cin.tie(0); ios::sync_with_stdio(false);
	string Botan[9] = { ".,!? ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz" };
	int N; cin >> N;
	for (int i = 0; i < N;i++) {
		string str; cin >> str;
		int now = -1;
		int cnt = -1;
		for (int j = 0; j < str.length();j++) {
			if (str[j] == '0') {
				if (now == -1) continue;
				cout << Botan[now][cnt%Botan[now].size()];
				now = cnt = -1;
			}
			else {
				now = str[j] - '1';
				cnt++;
			}
		}
		cout << endl;
	}
}