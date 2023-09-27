#include <iostream>
using namespace std;

int main () {
	string s;
	while (cin >> s,s!="-"){
		int m, h;
		cin >> m;
		for (int i=0;m>i;i++){
			cin >> h;
			s=s.substr(h)+s.substr(0,h);
		}
		cout << s << endl;
	}
}
