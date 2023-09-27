#include <iostream>
#include <map>
#include <string>
using namespace std;
int main()
{
	typedef map<string , int> IM;
	IM CounterMap;
	string s;
	string maxLengthSt;
	string maxCountSt;
	int c = 0;
	while(cin >> s){
		IM::iterator it = CounterMap.find(s);
		if(it == CounterMap.end())	CounterMap[s] = 1;
		else{
			++it->second;
			if(it->second > c){
				maxCountSt = s;
				c = it->second;
			}
		}
		if(maxLengthSt.size() < s.size() )
			maxLengthSt= s;
	}
	cout << maxCountSt << " " << maxLengthSt << "\n";
	return 0;
}