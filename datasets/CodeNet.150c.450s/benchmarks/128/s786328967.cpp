#include<iostream>
#include<string>
using namespace std;

int main() {
	string str,a;
	cin >> str;
	a = "";
	for(int i =str.size()-1;i>=0;i--){
		a += str[i];


	}
	cout << a << endl;
	
	return 0;
}


