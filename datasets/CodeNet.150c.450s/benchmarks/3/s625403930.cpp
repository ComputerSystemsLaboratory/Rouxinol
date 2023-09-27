#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	string str; cin >> str;
	int q; cin >> q;

	string cmd;
	while(q-- && cin >> cmd) {
		int q, a, b;
		cin >> a >> b;

		if(cmd == "replace") {
			string rpl; cin >> rpl;
			auto s = str.begin()+a;
			for(auto r : rpl) *s++ = r; 
		} else if(cmd == "reverse") {
			reverse(str.begin()+a, str.begin()+b+1);
		} else if(cmd == "print") {
			cout << str.substr(a,b-a+1) << '\n';
		}
	}

	return 0;
}

