#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	getline(cin, str);
	string::reverse_iterator now = str.rbegin();
	while (now != str.rend()){
		cout << *now;
		now++;
	}
	cout << endl;
}