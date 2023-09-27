#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
	string str, op, p;
	int q, a, b;
	cin >> str >> q;
	for(int i=0;i<q;i++){
		cin >> op >> a >> b;
		if(op == "print"){
			cout << str.substr(a,b-a+1) << endl;
		}
		if(op == "reverse"){
			p = str.substr(a,b-a+1);
			reverse(p.begin(),p.end());
			str.replace(a,b-a+1,p);
			
		}
		if(op == "replace"){
			cin >> p;
			str.replace(a,b-a+1,p);
		}
	}
	return 0;
}