#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#include<set>

using namespace std;

#define REP(i,n) for(int i = 0;i < n;i++)
	
int main()
{
	int n;
	cin >> n;
	
	REP(i,n)
	{
		string _input,_left,l_rev,_right,r_rev;
		set<string> s;
		
		cin >> _input;
		
		REP(j,_input.size())
		{
			_left  = l_rev = _input.substr(0,j);
			_right = r_rev = _input.substr(j);
			reverse(l_rev.begin(),l_rev.end());
			reverse(r_rev.begin(),r_rev.end());
			s.insert(_left + r_rev);
			s.insert(l_rev + _right);
			s.insert(l_rev + r_rev);
			s.insert(_right + _left);
			s.insert(r_rev + _left);
			s.insert(_right + l_rev);
			s.insert(r_rev + l_rev);
		}
		
		cout << s.size() << endl;
		
	}
	return 0;
	
}
	
	