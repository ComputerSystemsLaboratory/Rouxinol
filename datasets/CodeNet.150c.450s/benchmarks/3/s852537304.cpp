#include <iostream>
#include <string>
#include <algorithm>
// #include <iterator>
using namespace std;

int main(){
	string str, op, p;
	int a, b, n;
	cin >> str >> n;
	
	for(int i = 1; i <= n; i++){
		cin >> op;
		if(op == "print"){
			cin >> a >> b;
			cout << str.substr(a, b-a+1) << endl;
		}
		else if(op == "reverse"){
			cin >> a >> b;
			// str.begin
			reverse(str.begin()+a, str.begin()+b+1);
		}
		else if(op == "replace"){
			cin >> a >> b >> p;
			str.replace(a, b-a+1, p);
		}
	}
	return 0;
}