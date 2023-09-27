// 2014/07/25 Tazoe

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s, p;
	cin >> s;
	cin >> p;

	s = s+s;

	if(s.find(p)==string::npos){
		cout << "No" << endl;
	}
	else{
		cout << "Yes" << endl;
	}

	return 0;
}