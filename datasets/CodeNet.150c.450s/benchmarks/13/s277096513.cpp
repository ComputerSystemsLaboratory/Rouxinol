#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;

int main(){
	string s;
	string p;
	char c;

	getline(cin, s);
	s += s;
	
	cin >> p;

	if(s.find(p)!=-1){
		cout << "Yes" << endl;
	}else{
		cout << "No" << endl;
	}

	return 0;
}