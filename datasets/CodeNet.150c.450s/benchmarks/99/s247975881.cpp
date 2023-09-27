#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int ch_to_int(char c){
	return (int)c - '0';
}

int get_num(string s){
	int num = 0;
	int count = 1;
	string::iterator iter = s.begin();
	while(iter != s.end()){
		if(isdigit(*iter)) count = ch_to_int(*iter);
		else if(*iter == 'm'){
			num += count * 1000;
			count = 1;
		}else if(*iter == 'c'){
			num += count * 100;
			count = 1;
		}else if(*iter == 'x'){
			num += count * 10;
			count = 1;
		}else {
			num += count;
			count = 1;
		}
		iter++;
	}
	return num;
}

void print_mcxi(int num){
	int c[4];
	char chs[] = {
		'm', 'c', 'x', 'i'
	};
	c[0] = num / 1000;
	c[1] = (num % 1000) / 100;
	c[2] = (num % 100) / 10;
	c[3] = num % 10;
	for(int i = 0; i < 4; i++){
		if(c[i] == 0) continue;
		if(c[i] == 1) cout << chs[i];
		else cout << c[i] << chs[i];
	}
	cout << endl;
}

int main(){
	int n;
	cin >> n;
	string s1, s2;
	for(int i = 0; i < n; i++){
		cin >> s1 >> s2;
		int num = get_num(s1) + get_num(s2);
		print_mcxi(num);
	}
	return 0;
}