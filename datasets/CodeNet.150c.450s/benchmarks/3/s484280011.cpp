#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){

	string str;
	cin >> str;
	int q;
	cin >> q;
	for(int i = 0; i < q; i++){
		string command;
		int a, b;
		cin >> command >> a >> b;
		if(command == "print"){
			cout << str.substr(a, b-a+1) << endl;
		}
		if(command == "reverse"){
			reverse(str.begin()+a, str.begin()+b+1);
		}
		if(command == "replace"){
			string p;
			cin >> p;
			str.replace(a, b-a+1, p);
		}
	}
	return 0;
}