#include <iostream>
#include <map>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main()
{
	map<string, int> m;
	string s;
	while(cin>>s){
		m[s]++;
	}
	string often, longest;
	for(map<string, int>::iterator it=m.begin();it!=m.end();it++){
		if(longest.length() < it->first.length() ){
			longest = it->first;
		}
		if(m[often] < it->second){
			often = it->first;
		}
	}
	cout<<often<<' '<<longest<<endl;
	
	return 0;
}