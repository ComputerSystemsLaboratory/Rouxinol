#include <iostream>
using namespace std;

int n;
string s;
string alpha[9] = {
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

int main(void){
	cin>>n;
	while(n--){
		char before = '0';
		int count = -1;
		cin>>s;
		for(int i=0;i<s.length();i++){
			if(s[i] == '0' && before != '0'){
				int idx = before - '1';
				cout<<alpha[idx][count%alpha[idx].length()];
				count = -1;
			}
			else if(s[i] != '0'){
				count++;
			}

			before = s[i];
		}
		cout<<endl;
	}
}