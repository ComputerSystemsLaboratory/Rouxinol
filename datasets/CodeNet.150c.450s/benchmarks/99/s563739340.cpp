#include <bits/stdc++.h>
using namespace std;

char mcxi[] = {'i', 'x', 'c', 'm' };

int calc(string s){
	int res = 0;
	for(int i = 0; i < s.size(); ++i){
		int t = 1;
		if('2' <= s[i] && s[i] <= '9'){
			t = s[i] - '0';
			++i;
		}
		if(s[i] == 'm'){
			res += t * 1000;
		}
		else if(s[i] == 'c'){
			res += t * 100;
		}
		else if(s[i] == 'x'){	
			res += t * 10;
		}
		else if(s[i] == 'i'){
			res += t;
		}
	}
	return res;	
}

int main() {
	int n;
	cin >> n;
	for(int q = 0; q < n; ++q){
		string s1, s2, ans("");
		cin >> s1 >> s2;
		int l = calc(s1);
		int r = calc(s2);
		int w = l + r;
		int t = 3;
		while(pow(10, t) > w)
			t--;
		for(int i = 0; i  <= t; ++i){
			int a = w % 10;
			w /= 10;
			if(a == 0){
				continue;
			}
			else if(a == 1){
				ans += mcxi[i];
			}
			else{
				ans += mcxi[i] + to_string(a);
			}
		}
		reverse(ans.begin(), ans.end());
		cout << ans << endl;
	}
	return 0;
}