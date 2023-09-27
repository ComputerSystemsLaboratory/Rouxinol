#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[]){
	string s;
	string p;
	getline(cin, s);
	getline(cin, p);
	string s2 = s + s;
	if (s2.find(p) == string::npos){
		cout << "No\n";
	} else {
		cout << "Yes\n";
	}
	return 0;
}