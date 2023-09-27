#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include <stdio.h>

//#include <map>

using namespace std;

int main(void)
{
	string str;
	//str = "10000 1000 100";
	getline(cin, str);

	vector<string> vStr;

	while (str.find(' ') != -1)
	{
		vStr.push_back(str.substr(0, str.find(' ')));
		str.erase(0, str.find(' ') + 1);
	}
	vStr.push_back(str);

	vector<int> vInt;
	for (int i = 0; i < vStr.size(); i++)
	{
		vInt.push_back(stoi(vStr.at(i)));
	}

	sort(vInt.begin(), vInt.end());
	
	string ans;

	char t[20];
	sprintf(t,"%d %d %d", vInt.at(0),vInt.at(1),vInt.at(2));

	cout << t << endl;

	return 0;
}