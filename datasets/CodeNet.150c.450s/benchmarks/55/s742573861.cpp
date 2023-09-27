#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	int sum;
	while (getline(cin, s))
	{
		if((s[0] - '0') == 0) break;
		sum = 0;
		for (int i = 0; i < s.length(); i++)
			sum+= s[i] - '0';
		cout << sum << endl;
	}
	return 0;
}