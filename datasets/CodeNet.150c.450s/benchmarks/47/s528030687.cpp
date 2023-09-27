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
	string str;
	//str = "5 4 2 4 1";
	getline(cin, str);

	vector<string> vStr;

	while (str.find(' ') != -1)
	{
		vStr.push_back(str.substr(0, str.find(' ')));
		str.erase(0, str.find(' ') + 1);
	}
	vStr.push_back(str);

	int W, H, x, y, r;
	W = stoi(vStr[0]);
	H = stoi(vStr[1]);
	x = stoi(vStr[2]);
	y = stoi(vStr[3]);
	r = stoi(vStr[4]);

	bool judge = true;

	for (int i = -1; i < 2; i++)
	{
		if (x + i * r >= 0 && x + i * r <= W &&
			y + i * r >= 0 && y + i * r <= H)
		{

		}
		else
		{
			judge = false;
		}
	}

	string ans;
	judge ? ans = "Yes" : ans = "No";
	cout << ans << endl;

	return 0;
}