#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	int i,n,h;
	while(1) {
		cin >> str;
		if (str=="-") break;
		cin >> n;
		for(i=0; i<n; ++i) {
			cin >> h;
			str+=str.substr(0,h);
			str.erase(str.begin(),str.begin()+h);
		}
		cout << str << endl;
	}
	return 0;
}