#include <iostream>
#include <algorithm>
using namespace std;

int main () {
	string str;
	int q;
	cin >> str >> q;
	for (int i=0;q>i;i++){
		string order;
		int a,b;
		cin >> order >> a >> b;
		if (order=="print") cout << str.substr(a,b-a+1) << endl;
		if (order=="reverse") reverse(str.begin()+a,str.begin()+b+1);
		if (order=="replace"){
			string rep;
			cin >> rep;
			str.replace(a,b-a+1,rep);
		}
	}
}
