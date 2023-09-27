#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main() {
	string tmp;
	string longest;
	int mlength=0;
	map<string,int> m;
	while(cin >> tmp)
	{
		m[tmp]++;
		if (tmp.size()>mlength)
		{
			mlength=tmp.size();
			longest=tmp;
		}
	}
	string frequent;
	int mfreq=0;
	for (map<string,int>::iterator it=m.begin(); it!=m.end(); ++it)
	{
		if (it->second > mfreq)
		{
			mfreq=it->second;
			frequent=it->first;
		}
	}
	cout << frequent << " " << longest << endl;
	return 0;
}