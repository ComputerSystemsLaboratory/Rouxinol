#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
	map<string, int> mp;
	string s;
	string max, len;
	
	while (cin >> s){
		mp[s]++;
		if (mp[max] < mp[s]){
			max = s;
		}
		else if (len.size() < s.size()){
			len = s;
		}
	}
	
	cout << max << ' ' << len << endl;
	
	return (0);
}