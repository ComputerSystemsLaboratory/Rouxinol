#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	string str;
	cin >> str;
	int n ;
	cin >> n;
	for(int i = 0; i < n; ++i){
		string com;
		int a, b;
		cin >> com; cin >> a; cin >> b;
		if(com == "replace"){
			string p;
			cin >> p;
			str = str.substr(0, a) + p + str.substr(b + 1);
		}
		if(com == "reverse"){
			for(int j = 0; j < (b - a + 1) / 2; ++j){
				swap(str[a + j], str[b - j]);
			}
		}
		if(com == "print"){
			cout << str.substr(a, b - a + 1) << endl;
		}
	}
	return 0;
}