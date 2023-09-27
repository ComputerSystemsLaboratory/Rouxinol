#include <iostream>
#include <string>

using namespace std;

int main()
{
	string sr;
	cin >> sr;
	int len = sr.size();
	for (int i = len; i >0; i--)
	{
		cout << sr[i-1];
	}cout << endl;
	return 0;
}