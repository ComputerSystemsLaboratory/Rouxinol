#include <iostream>
#include <string>

using namespace std;

int main()
{
	int al[26] = {0};
	
	string x;
	while (getline(cin, x))
	{
		for (int i = 0; i < x.size(); i++)
		{
			char a;
			// toLower
			if (x[i] >= 0x41 && x[i] <= 0x5a)
			{
				a = x[i];
				a += 0x20;
				al[(a - 0x61)] += 1;
			} else if (x[i] >= 0x61 && x[i] <= 0x7a)
			{
				a = x[i];
				al[(a - 0x61)] += 1;
			}
		}
	}
	
	for (int i = 0; i < 26; i++)
	{
		cout << (char)(0x61+i) << " : " << al[i] << endl;
	}
	
	return 0;
}