#include <iostream>
using namespace std;

int main(void){
	string b[9] = {
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

	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		string s; //char s[100];
		cin>>s;
		int len = s.length();

		//OÌ¶ before
		//beforeª½ñ±¢½© count
		char before = '0';
		int count = 0;
		for(int i=0;i<len;i++){
			if(s[i] == '0' && before != '0'){
				cout<<b[before - '1'][(count - 1) % b[before - '1'].length()];
				before = '0';
				count = 0;
			}
			else if('1' <= s[i] && s[i] <= '9'){
				before = s[i];
				count++;
			}
		}
		cout<<endl;
	}

	return 0;
}