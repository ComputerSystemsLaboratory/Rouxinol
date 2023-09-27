
#include<iostream>
#include<string>
#include<string.h>

using namespace std;

int main(){

	string s, p;
	bool a = false;

	cin >> s >> p;

	s = s + s;

	if (s.find(p) != string::npos)a = true;


	if (a){
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}

	return 0;
}
