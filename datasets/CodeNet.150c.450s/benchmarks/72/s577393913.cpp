#include <iostream>
#include <string>

using namespace std;

int main(){
	string str;
	getline(cin, str);
	for (int i = 0; i < str.size(); i++) {
		char charactor = str.at(i);
		if ('A' <= charactor && charactor <= 'Z')
			charactor += 32;
		else if ('a' <= charactor && charactor <= 'z')
			charactor -= 32;
		cout << charactor;
	}
	cout << endl;
	return 0;
}