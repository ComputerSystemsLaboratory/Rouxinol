#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
	string in,lon = "",mor = "";
	map<string,int> aa;
	while(cin >> in)
	{
		if(in.size() > lon.size())
			lon = in;
		aa[in]++;
		if(aa[mor] < aa[in])
			mor = in;
	}
	cout << mor << " " << lon << endl;
}