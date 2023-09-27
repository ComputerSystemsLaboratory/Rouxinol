#include<iostream>
#include<string>
#include<algorithm>
#include<map>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#define REP(n) rep(i,n)

int main()
{
	int n,m;
	while(cin >> n && n)
	{
	map<char, char> f;
	
	char key,value;
	REP(n)
	{
		cin >> key >> value;
		f.insert( map<char, char>::value_type(key,value));
	}
	map<char, char>::iterator ans;
	char data;
	cin >> m;
	REP(m)
	{
		cin >> data;
		ans = f.find(data);
		if(ans == f.end()) cout << data;
		else cout << (*ans).second;
	}
	cout << endl;
	}
	return 0;
}