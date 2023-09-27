#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	string s, ss, key;
	int i, j;


	cin >> s;
	cin >> key;

	ss = s + s;

	if(ss.find(key) == -1)
		cout << "No" << endl;
	else
		cout << "Yes" << endl;

	return 0;
}