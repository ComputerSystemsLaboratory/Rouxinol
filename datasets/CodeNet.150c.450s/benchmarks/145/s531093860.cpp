#include <bits/stdc++.h>
using namespace std;

const int INF = 1e+9 * 2;
double eps = 1e-10;

int main() {
	string s, t(""), ans_c(""), ans_s("");
	map<string, int> cnt;
	getline(cin, s);
	for(int i = 0; i < s.size(); ++i){
		if(s[i] == ' '){
			cnt[t]++;
			if(ans_s.length() < t.length())
				ans_s = t;
			t = "";
		}
		else{
			t += s[i];
		}
	}
	if(ans_s.length() < t.length())
		ans_s = t;
	int maxim = 0;
	for(auto it = cnt.begin(); it != cnt.end(); ++it){
		if(maxim < (*it).second){
			maxim = (*it).second;
			ans_c = (*it).first;
		}
	}
	cout << ans_c << " " << ans_s << endl;
	return 0;
}