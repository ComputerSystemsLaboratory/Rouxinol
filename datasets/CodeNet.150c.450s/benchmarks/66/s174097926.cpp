#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <set>

#define rep2(i, b, n) for(int i=b; i < n; ++i)
#define repm(i, b, n) for(int i=b; i > n; --i)
#define rep(i, n) rep2(i, 0, n)

using namespace std;

int main( void )
{
	int n, m;
	
	while (cin >> n)
	{
		set<string> s;
		string in;
		
		rep (i, n)
		{
			cin >> in;
			s.insert( in );
		}
		
		cin >> m;
		bool opened = false;
		
		rep (i, m)
		{
			cin >> in;
			if (s.count( in ))
			{
				if (opened)
					cout << "Closed by " << in << endl;
				else
					cout << "Opened by " << in << endl;
					
				opened = !opened;
			}
			else
				cout << "Unknown " << in << endl;
		}
		
	}
	return 0;
}