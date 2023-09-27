#include <iostream>
#include <string>

using namespace std;

int main(){
	string s, p;
	cin >> s >> p;
	s += s;
	if(s.find(p) < s.length()) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}