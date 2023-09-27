#include <iostream>
#include <string>
using namespace std;

int main(){
	std::string str;
	while(cin >> str) {
		for(int i = (int)str.length() - 1; i >= 0; i--) {
			cout << str[i];
		}
		cout << endl;
	}
	return 0;
}