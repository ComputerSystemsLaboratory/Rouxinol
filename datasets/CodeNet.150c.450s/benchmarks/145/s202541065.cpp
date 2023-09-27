#include <iostream>
#include <string>
#include <map>
using namespace std;

//#include <fstream>
int main(void)
{
	string currStr;
	string strMostFrequenty;
	string strLongest;
	map<string, int> strCount;

	//ifstream ifs("data.txt");
	istream& in=cin;

	while(!in.eof())
	{
		in >> currStr;
		if(currStr.length() > strLongest.length())
			strLongest=currStr;

		if(strCount.count(currStr)==1)
		{
			strCount[currStr]++;
			if(strCount[currStr] > strCount[strMostFrequenty])
				strMostFrequenty=currStr;
		}
		else
			strCount.insert(map<string, int>::value_type(currStr, 1));
	}

	cout << strMostFrequenty << ' ' << strLongest << endl;
	return 0;
}