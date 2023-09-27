#include<iostream>
#include<algorithm>
#include<math.h>
#include<queue>
#include<vector>
#include<climits>
#include<map>
#include<string>
#include<functional>
#include<iomanip>
#include<deque>

using namespace std;
typedef long long ll;

ll N;
vector<vector<char>> ans;

int main() {
	cin >> N;
	for (int i = 1; i <= N; i++) {
		char S[1030] = {};
		vector<char> vec;
		ans.push_back(vec);
		cin >> S;
		for (int j = 1; j < 1030; j++) {
			if (S[j] == 0)break;
			if (S[j] == '0' && S[j - 1] != '0') {
				for (int k = j - 1; k >= 0; k--) {
					if (S[k] != S[j - 1] || k == 0) {
						if (k == 0 && S[0] != '0')k--;
						switch (S[j - 1]) {
						case '1':
							switch ((j - k) % 5) {
							case 0:
								ans[i-1].push_back('?');
								break;
							case 1:
								ans[i-1].push_back(' ');
								break;
							case 2:
								ans[i-1].push_back('.');
								break;
							case 3:
								ans[i-1].push_back(',');
								break;
							case 4:
								ans[i-1].push_back('!');
							}
							break;
						case '2':
							ans[i-1].push_back('a' + (j - k - 2) % 3);
							break;
						case '3':
							ans[i-1].push_back('d' + (j - k - 2) % 3);
							break;
						case '4':
							ans[i-1].push_back('g' + (j - k - 2) % 3);
							break;
						case '5':
							ans[i-1].push_back('j' + (j - k - 2) % 3);
							break;
						case '6':
							ans[i-1].push_back('m' + (j - k - 2) % 3);
							break;
						case '7':
							ans[i-1].push_back('p' + (j - k - 2) % 4);
							break;
						case '8':
							ans[i-1].push_back('t' + (j - k - 2) % 3);
							break;
						case '9':
							ans[i-1].push_back('w' + (j - k - 2) % 4);
						}
						break;
					}
				}
			}
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < ans[i].size(); j++)cout << ans[i][j];
		cout << endl;
	}
	return 0;
}
