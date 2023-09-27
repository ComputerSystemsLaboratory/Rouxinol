#include <iostream>
#include <string>
using namespace std;

int main(){
	int n;
	for(cin >> n; n--; ){
		string s;
		cin >> s;
		s += '0';

		const string tbl[10] = {
			"",
			".,!? ",
			"abc",
			"def",
			"ghi",
			"jkl",
			"mno",
			"pqrs",
			"tuv",
			"wxyz",
		};

		int d = 0, t = 0;
		for(size_t i = 0; i < s.size(); ++i){
			int c = s[i] - '0';
			if(c == 0 || c != d){
				if(d != 0){
					cout << tbl[d][t];
				}
				d = c;
				t = 0;
			}
			else{
				t = (t + 1) % tbl[d].size();
			}
		}
		cout << endl;
	}
}