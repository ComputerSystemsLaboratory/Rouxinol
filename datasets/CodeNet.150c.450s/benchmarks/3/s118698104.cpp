#include <iostream>
#include <string>
using namespace std;

int main(){

	string str;
	cin >> str;

	int q;
	cin >> q;

	string comand, p;
	int a, b;

	for(int i = 0; i < q; i++){
		cin >> comand;
		if(comand == "print"){
			cin >> a >> b;
			cout << str.substr(a, b - a + 1) << endl;
		}else if(comand == "reverse"){
			cin >> a >> b;
			string temp(str.substr(a, b - a + 1));
//			cout << temp << endl;
			for(int j = 0; j < b - a + 1; j++){
				str[a + j] = temp[b - a - j];
			}
		}else if(comand == "replace"){
			cin >> a >> b >> p;
			str.replace(a, b - a + 1, p);
		}
	}

	return 0;
}