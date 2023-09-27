#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main(){
	while(true){
		string s;
		getline(cin, s);
		if(s.length()==1&&s[0]=='0'){
			break;
		}
		int sum = 0;
		for(int i = 0; i < s.length(); i++){
			sum += (int)(s[i]-48);
		}
		cout << sum << "\n";
	}
}
