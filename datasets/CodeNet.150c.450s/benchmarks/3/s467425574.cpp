#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(){
	
	string str;
	int q;
	cin >> str;
	cin >> q;
	
	string cmd;
	int a,b;
	string str_insert;
	
	for (int i=0; i<q; i++){
		cin >> cmd >> a >> b;
		
		if (cmd == "replace"){
			cin >> str_insert;
			str.replace(a ,b-a+1 , str_insert);
		}
		else if (cmd == "reverse"){
			for (int j=0; j<=1000; j++){
				if (a+j >= b-j) break;
				char d = str[a+j];
				str[a+j] = str[b-j];
				str[b-j] = d;
			}
		}
		else if (cmd == "print"){
			cout << str.substr(a,b-a+1) << endl;
		}
	}
	return 0;
}