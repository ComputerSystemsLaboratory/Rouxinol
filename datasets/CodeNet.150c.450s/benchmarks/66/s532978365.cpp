#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<cstdio>
#include<cstring>
#include<map>
using namespace std;

#define rep(i,n) for(int i=0;i<n;i++)
#define REP(n) rep(i,n)
#define all(n) n.begin(),n.end()
const int OPEN = 1, CLOSE = 0;

typedef pair<string, int> pp;

int main()
{
	int n, m;
	string s;
	map<string, int> l;
	cin >> n;
	REP(n){ cin >> s ; l.insert(pp(s, 1));}
	cin >> m;
	int f = CLOSE;
	REP(m)
	{
		cin >> s;
		if(l.find(s) == l.end())
			cout << "Unknown " << s << endl;
		else
		{
			if(f == CLOSE){	cout <<"Opened by " << s << endl;  f = OPEN;}
			else { cout << "Closed by " << s << endl; f = CLOSE;}
		}
	}

	return 0;
}