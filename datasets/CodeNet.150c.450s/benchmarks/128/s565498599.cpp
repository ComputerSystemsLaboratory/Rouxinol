#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char str[100];
	cin >> str;
	for(int i=strlen(str)-1;i>=0;i--){
		cout << str[i];
	}
	cout << endl;
	return 0;
}
