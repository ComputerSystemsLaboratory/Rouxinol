#include<iostream>
using namespace std;
int main() {
	char str[20];
	cin >> str;
	int seek;
	for(seek = 0;seek < 20;seek++) {
		if(str[seek] == '\0') {
			break;
		}
	}
	seek--;
	for(int rv = seek;rv>=0;rv--) {
		cout << str[rv];
	}
	cout << endl;
	
	return 0;
}