#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

int mcxi2int(const string &s){
	string t = " " + s;
	int x = 0;
	for(int i = 1; i < t.size(); ++i){
		if(t[i] == 'm'){
			x += 1000 * (isdigit(t[i - 1]) ? (t[i - 1] - '0') : 1);
		}else if(t[i] == 'c'){
			x += 100 * (isdigit(t[i - 1]) ? (t[i - 1] - '0') : 1);
		}else if(t[i] == 'x'){
			x += 10 * (isdigit(t[i - 1]) ? (t[i - 1] - '0') : 1);
		}else if(t[i] == 'i'){
			x += 1 * (isdigit(t[i - 1]) ? (t[i - 1] - '0') : 1);
		}
	}
	return x;
}
string int2mcxi(int x){
	const char *TABLE = "ixcm";
	string s;
	for(int i = 0; i < 4; ++i){
		if(x % 10 > 0){
			s += TABLE[i];
			if(x % 10 > 1){ s += ('0' + x % 10); }
		}
		x /= 10;
	}
	reverse(s.begin(), s.end());
	return s;
}

int main(){
	int n;
	cin >> n;
	while(n--){
		string a, b;
		cin >> a >> b;
		cout << int2mcxi(mcxi2int(a) + mcxi2int(b)) << endl;
	}
	return 0;
}