#include<iostream>
#include<string>
using namespace std;
int main(){
	string s, p;
	string::size_type d;
	cin >> s >> p;
	s = s + s;
	d = s.find(p);
	if (d == string::npos){
		cout << "No" << endl;
	}
	else cout << "Yes" << endl;
	return 0;
}