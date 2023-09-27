#include <iostream>
#include <string>
using namespace std;

int main(){
	string s;

	cin >> s;

	while(s!="0"){
		int i[s.size()];
		int x=0;

		for(int k=0;k<s.size();k++){
			i[k] = s[k] - '0';
		}

		for(int j=0;j<s.size();j++){
			x += i[j];
		}

               cout << x << endl;

		cin >> s;
	}
	return 0;
}