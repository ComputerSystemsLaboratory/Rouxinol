#include <iostream>
#include <string>

using namespace std;

int main(void){
	int n; cin >> n;
	string dic[] ={" ", ".,!? ", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
	for(int _=0; _<n; _++){
		string str; cin >> str;
		int cnt = -1;
		char val = '0';
		for(int i=0; i<str.size(); i++){
			if(str[i] == '0'){
				if(val == '0') continue;
				if(val == '1') cnt%=5;
				else if(val == '7' || val == '9') cnt %= 4;
				else cnt %= 3;
				cout << dic[val-'0'][cnt];
				cnt = -1;
				val = '0';
			} else{
				cnt++;
				val = str[i];
			}
		}
		cout << endl;
	}
}
