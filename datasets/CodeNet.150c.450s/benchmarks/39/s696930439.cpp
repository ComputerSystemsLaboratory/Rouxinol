#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>
#include <utility>

using namespace std;

int main()
{

	string str;
	getline(cin, str);
	
vector<string> vStr;

	while (str.find(' ') != -1 )
	{
		vStr.push_back(str.substr(0,str.find(' ')));
		str.erase(0, str.find(' ') + 1);
	}
	vStr.push_back(str);

cout << stoi(vStr.at(0)) * stoi(vStr.at(1)) << " " << stoi(vStr.at(0)) * 2 + stoi(vStr.at(1)) * 2 << endl;

return 0;

}