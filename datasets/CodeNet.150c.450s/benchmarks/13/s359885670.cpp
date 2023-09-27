#include <iostream>
#include <string>
using namespace std;
int main(){
	string str;
	string st;
	cin >> str >> st;
	str += str;
	//int ans = str.find(st);
	//cout << str.find(st) << endl;
	if( str.find(st) > 101 )
		cout << "No" << endl;
	else
		cout << "Yes" << endl;
	return 0;
}