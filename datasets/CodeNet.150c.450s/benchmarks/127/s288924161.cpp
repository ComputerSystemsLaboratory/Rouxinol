#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

int f[] = {0, 0, 1, 1};
int s[] = {1, 0, 1, 0};

int main() {
	int m;
	cin >> m;
	for(int c = 0; c < m; ++c){
		string str;
		cin >> str;
		int ans = 0;
		map<string, int> cnt;
		for(unsigned int i = 1; i < str.size(); ++i){
			string s1[2], s2[2];
			s1[0] = s1[1] = str.substr(0, i);
			s2[0] = s2[1] = str.substr(i, str.size() - i);
			reverse(s1[1].begin(), s1[1].end());
			reverse(s2[1].begin(), s2[1].end());
			for(int j = 0; j < 4; ++j){
				string ss = s1[f[j]] + s2[s[j]];
				if(cnt[ss] == 0){
					cnt[ss] = 1;
					ans++;
				}
			}
			for(int j = 0; j < 4; ++j){
				string ss = s2[f[j]] + s1[s[j]];
				if(cnt[ss] == 0){
					cnt[ss] = 1;
					ans++;
				}
			}
		}
		cout << ans << endl;
	}
	return 0;
}