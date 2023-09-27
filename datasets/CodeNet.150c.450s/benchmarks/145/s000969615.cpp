#include<iostream>
#include<string>
#include<map>

using namespace std;

int main(void)
{
	string longest;
	string in;
	pair<string, int> times;
	map<string, int> mp;
	
	while(std::cin >> in){
		if(longest.size() < in.size()) longest = in;
		mp[in]++;
	}
	
	std::map<string, int>::iterator mp_first = mp.begin();
	for(;mp_first != mp.end(); ++mp_first){
		if(times.second < (mp_first -> second))
		times = *mp_first;
	}
	
	cout << times.first << ' ' << longest << endl;
	return 0;
}