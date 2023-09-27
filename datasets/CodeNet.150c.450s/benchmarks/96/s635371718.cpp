#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> P;

string con[15] = {".,!? ", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
int main() {
	string s;
	int n;
	cin >> n;
	for(int q = 0; q < n; ++q){
		cin >> s;
		string ans("");
		P cnt;
		cnt.first = cnt.second = 0;
		for(int i = 0; i < s.size(); ++i){
			if(s[i] == '0'){
				int num = cnt.first;
				if(num == 1){
					ans += con[num - 1][cnt.second % 5];
				}
				else if(num == 7 || num == 9){
					ans += con[num - 1][cnt.second % 4];
				}
				else if(num == 0){
					continue;
				}
				else{
					ans += con[num - 1][cnt.second % 3];
				}
				
				cnt.first = cnt.second = 0;
			}
			else{
				if(cnt.first == 0){
					cnt.first = s[i] - '0';
				}
				else{
					cnt.second++;
				}
			}
		}
		cout << ans << endl;
	}
	return 0;
}