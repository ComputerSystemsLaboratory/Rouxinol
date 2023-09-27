#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
	int mc=0;
	string str,mlstr="";
	map<string,int> m;
	while(cin >> str)
	{
		if(!(m.insert(pair<string,int>(str,1)).second))
		{
			m[str]++;
		}
		mc = (m[str]>mc ? m[str] : mc);
		mlstr = (str.length()>mlstr.length() ? str : mlstr); 
	}
	
	map<string,int>::iterator it;
	for(it=m.begin(); it!=m.end(); it++)
	{
		if(mc==it->second)
		{
			cout << it->first;
		}
	}
	cout << " " << mlstr << endl;
}