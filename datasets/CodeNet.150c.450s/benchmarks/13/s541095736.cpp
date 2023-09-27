#include<iostream>
#include<string>

using namespace std;

int main(){
	string s,a;
	cin >> s >> a;
	s += s;
	string::size_type index = s.find(a);
	if (index == string::npos) {
		cout << "No" << endl;
	}
	else {
		cout << "Yes" << endl;
	}

	return 0;
}