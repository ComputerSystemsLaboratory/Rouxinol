#include <iostream>
#include <string>
using namespace std;

int main(){

	string str, str1, str2;
	int m;

	while(cin >> str){
		if(str == "-") break;
		cin >> m;
		int h;

		for(int i=0; i<m; i++){
			cin >> h;
			str1 = str.substr(0,h);
			str2 = str.substr(h);
			str = str2 + str1;
		}

		cout << str << endl;

	}
}