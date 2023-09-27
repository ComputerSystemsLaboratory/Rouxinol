#include <iostream>
#include <string>
#include <algorithm>
#include <map>
using namespace std;

int main()
{
	string s[1001],len_max,ans;
	map<string,int> count;
	int i = 0,count_max = 1;
	while(cin >> s[i])
	{
		if(len_max.size() < s[i].size())
		{
			len_max = s[i];		
		};
		count[s[i]]++;

		if(count[s[i]] > count_max)
		{
			count_max = count[s[i]];
			ans = s[i];
		}
		i++;
	}

	cout << ans <<  " " << len_max << endl;

	return 0;
}