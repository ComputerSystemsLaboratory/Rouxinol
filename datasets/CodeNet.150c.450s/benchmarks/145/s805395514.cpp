#include <iostream>
#include <map>
#include <string>
using namespace std;
typedef pair<int,int> P;
int main()
{
	string s;
	pair<string,int> mode=make_pair("",0),mlen=make_pair("",0);
	map<string,P> m;
	while(cin>>s){
		int d=++m[s].first;
		m[s].second=s.length();
		if(mode.second<d){mode=make_pair(s,d);}
		if(mlen.second<s.length()){mlen=make_pair(s,s.length());}
	}
	cout<<mode.first<<" "<<mlen.first<<endl;
	return 0;
}