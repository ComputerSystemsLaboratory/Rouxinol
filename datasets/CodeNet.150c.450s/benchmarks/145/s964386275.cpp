#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>
#include <set>
#include <queue>
#include <cstring>
#include <climits>
#include <cmath>
#include <cfloat>

using namespace std;

multiset<string> se;
string mast = "";
string manumst = "";
int manum = 0;

int main()
{
	string str;
	
	while( cin >> str, !cin.eof())
	{
		
		if( mast.size() < str.size() )
			mast = str;
		
		se.insert(str);
		if( se.count(str) > manum )
		{
			manum = se.count(str);
			manumst = str;
		}
	}
	
	cout << manumst << " " << mast << endl;
	
	
	return 0;
}