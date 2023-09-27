#include <bits/stdc++.h>
using namespace std;

map<string, int> mp;

int main()
{
	string str;
	string maxi;
	string maxl;
	
	while (!cin.eof()){
		cin >> str;
		mp[str]++;
		if (mp[maxi] < mp[str]){
			maxi = str;
		}
		if (maxl.size() < str.size()){
			maxl = str;
		}
	}
	
	cout << maxi << " " << maxl << endl;
	
	return 0;
}