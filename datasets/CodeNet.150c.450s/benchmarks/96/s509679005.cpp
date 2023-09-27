#include <iostream>
#include <string>

using namespace std;

int main(){
	int n;
	cin >> n;
	while(n--){
		string s; cin >> s;
		string t[] = {" ", ".,!? ", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
		string res = "";
		int cnt = 0, idx = 0;
		for(int i=0;i<s.size();i++){
			if(s[i]=='0'){
				if(idx!=0){
					res += t[idx][cnt];
				}
			}
			if(idx == s[i]-'0'){
				cnt = (cnt+1)%t[idx].size();
			} else {
				cnt = 0;
			}
			idx = s[i]-'0';
		}
		cout << res << endl;
	}
}