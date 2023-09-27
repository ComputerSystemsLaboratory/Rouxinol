#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
	string str;
	cin >> str;
	//str = "abcde";
	long q;
	cin >> q;
	//q = 1;
	for (long i = 0; i < q; i++){
		long a = 0, b = 0;
		string p;
		string order;
		cin >> order;
		//order = "print";
		if (order == "print"){
			cin >> a >> b;
			//a = 1;
			//b = 3;
			cout << str.substr(a, b - a + 1) << endl;
		}
		else if (order == "reverse"){
			cin >> a >> b;
			//a = 1;
			//b = 3;
			string str2;
			str2 = str.substr(a, b - a + 1);
			//cout << str2 << endl;
			reverse(str2.begin(), str2.end());
			//cout << str2 << endl;
			str = str.replace(a, b - a + 1, str2);
			//cout << str << endl;
		}
		else if (order == "replace"){
			cin >> a >> b >> p;
			str = str.replace(a, b - a + 1, p);
		}
	}
	return 0;
}