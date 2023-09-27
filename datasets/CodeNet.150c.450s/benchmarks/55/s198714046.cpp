#include <iostream>
#include <cstring>
using namespace std;

int main(){
	char s[1001];
	while(cin >> s){
		int sum = 0;
		if(s[0]=='0') break;
		for(int i=0; i<strlen(s); i++){
			sum +=s[i]-'0';
		}

		cout << sum << "\n";
	}
}