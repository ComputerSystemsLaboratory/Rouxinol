#include <iostream>
#include <map>
using namespace std;

int main()
{
	int t,mc=0;
	map<int,int> m;
	while(cin >> t)
	{
		if(!(m.insert(pair<int,int>(t,1)).second))
		{
			m[t]++;
		}
		mc = (m[t]>mc ? m[t] : mc);
	}
	
	map<int,int>::iterator it;
	for(it=m.begin(); it!=m.end(); it++)
	{
		if(mc==it->second)
		{
			cout << it->first << endl;
		}
	}
}