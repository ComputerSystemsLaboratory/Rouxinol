#include <bits/stdc++.h>

using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,a) FOR(i,0,a)

int main(){
	map<string,int> mp;
	ios::sync_with_stdio(false);
	string s;
	string a,b;
	b="";
	while (cin>>s){
		mp[s]++;
		if (s.length()>b.length()){
			b=s;
		}
	}
	int ma=0;
	for (auto ite=mp.begin();ite!=mp.end();ite++){
		if (ite->second > ma){
			ma = ite->second;
			a = ite->first;
		}
	}
	cout << a << " "<<b<<endl;
	return 0;
}