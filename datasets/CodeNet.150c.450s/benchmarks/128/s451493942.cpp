#include <iostream>
#include <string>
using namespace std;
int main(){
	string str;
	int i;
	cin >> str;
	for(i=str.size();i>0;i--){
		cout << str[i-1];
	}
	cout << endl;
	return 0;
}