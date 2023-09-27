#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include <stdio.h>

//#include <map>

using namespace std;

int main()
{
	vector<int> vInt;
	int t;

	while (cin >> t)
	{
		if (t == 0)break;
		vInt.push_back(t);
	}

	for (int i = 0; i < vInt.size(); i++)
	{
		char ch[20];
		sprintf(ch, "Case %d: %d", i + 1, vInt.at(i));
		cout << ch << endl;
	}

	return 0;
}