#include<iostream>
#include<strstream>
#include<utility>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cmath>
#include<climits>
#include<map>
#include<string>
#include<sstream>

using namespace std;

#define mp make_pair
#define rep(i,n) for( int i = 0; i < n; i++ )
typedef vector<int,int> V;
typedef long long int ll;


int StringToInt(string str)
{
    istrstream istr(str.data());
    int i;
    istr>>i;
    return i;
}

string IntToString(int number)
{
	stringstream ss;
	ss << number;
	return ss.str();
}

int main()
{
	string a;
	int L;

	while( cin >> a >> L, L )
	{
		if( a == "0" ) 
		{
			puts("0 0 1");
			continue;
		}
		map< string,int > container;
		for( int i = 1; i <= 20; i++ )
		{
			container.insert( mp( a,0 ) );
			while( a.size() < L )
			a = '0' + a;
			int k;
			stable_sort( a.begin() , a.end() , greater<int>() );
			k = StringToInt(a);
			stable_sort( a.begin() , a.end() );
			k -= StringToInt(a);
			a = IntToString(k); 
			if( !container.insert( mp(a,i) ).second )
			{
				map< string,int >::iterator itr = container.begin();
				itr = container.find(a);
				cout << itr->second << " " << k << " " << i - itr->second << endl; 
				break;
			}
		}

	}
	return 0;
}