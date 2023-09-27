#include <iostream>
#include <string>

using namespace std;

int main() {
	string com;
	string str;
	string str_p;
	string str_temp;
	int n;
	int a,b;
	cin >> str;
	cin >> n;
	for(int i=0; i<n; ++i) {
		cin >> com;
		if(com=="print") {
			cin >> a >> b;
			cout << str.substr(a,b-a+1) << endl;
		} else if(com=="reverse") {
			cin >> a >> b;
			str_temp=str.substr(a,b-a+1);
			str_p="";
			for(int i=0; i<b-a+1; ++i) {
				str_p+=str_temp[b-a-i];
			}
			str.replace(a,b-a+1,str_p);
		} else if(com=="replace") {
			cin >> a >> b >> str_p;
			str.replace(a,b-a+1,str_p);
		}
	}
}