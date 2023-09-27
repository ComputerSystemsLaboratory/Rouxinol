#include <iostream>
#include <string>
using namespace std;

int parse_int(string s){
	int reg = 1, res = 0;
	for(int i = 0;i < s.length();++i){
		if('2' <= s[i] && s[i] <= '9'){
			reg = s[i] - '0';
		}
		else{
			if(s[i] == 'm'){
				res += reg * 1000;
			}
			else if(s[i] == 'c'){
				res += reg * 100;
			}
			else if(s[i] == 'x'){
				res += reg * 10;
			}
			else {
				res += reg;
			}
			reg = 1;
		}
	}
	return res;
}

string parse_str(int a){
	string res = "";
	int divisor[] = {1000, 100, 10, 1};
	char symbol[] = {'m', 'c', 'x', 'i'};
	for(int i = 0;i < 4;++i){
		int c = a / divisor[i];
		if(c == 1){
			res += symbol[i];
		}
		else if(1 < c && c < 10){
			res += (c + '0');
			res += symbol[i];
		}
		a -= c * divisor[i];
	}
	return res;
}

int main(){
	int n;
	string a, b;
	cin >> n;
	for(int i = 0;i < n;++i){
		cin >> a >> b;
		cout << parse_str(parse_int(a) + parse_int(b)) << endl;
	}
	return 0;
}