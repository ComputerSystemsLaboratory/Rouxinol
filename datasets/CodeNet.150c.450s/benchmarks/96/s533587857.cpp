#include <iostream>
#include <stack>
#include <string>
#include <vector>
#include <algorithm>


using namespace std;

int main() {
	vector< string > keitai;

	keitai.push_back(".,!? "); keitai.push_back("abc"); keitai.push_back("def"); keitai.push_back("ghi"); keitai.push_back("jkl");
	keitai.push_back("mno"); keitai.push_back("pqrs"); keitai.push_back("tuv"); keitai.push_back("wxyz");

	vector< int > count(keitai.size(), 0);

	int n;
	cin >> n;

	vector< string > s;
	for(int i = 0; i < n; i++) {
		string tmp;
		cin >> tmp;
		s.push_back(tmp);
	}

	for(int i = 0; i < n; i++) {
		string ans;

		for(int j = 0; j < s[i].size(); j++) {
			if(s[i][j] == '0') {
				fill(count.begin(), count.end(), 0);
				continue;
			}

			if(j == 0) {
				fill(count.begin(), count.end(), 0);
				ans.push_back(' ');
			} else if(s[i][j - 1] == '0' && s[i][j] != '0') {
				fill(count.begin(), count.end(), 0);
				ans.push_back(' ');
			}

			ans[ans.size() - 1] = keitai[s[i][j] - '0' - 1][count[s[i][j] - '0' - 1] % keitai[s[i][j] - '0' - 1].size()];
			count[s[i][j] - '0' - 1]++;
		}

		cout << ans << endl;
	}
}