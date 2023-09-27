#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	cin >> str;
	for(size_t i = str.size() - 1; i >= 0; --i){
		if(i == -1) break;
		cout << str[i];
	}
	cout << endl;
	return 0;
}