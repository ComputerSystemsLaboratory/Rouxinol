#include <iostream>
#include <string>
#include <set>
using namespace std;

string reverse(string str)
{
	string rev = string((str).rbegin(), (str).rend());
	return rev;
}
	
	
int main()
{
	int m;
	
	cin >> m;
	
	for(int i = 0; i < m ; i++)
	{
		string str;
		set<string> s;
		
		cin >> str;
		
		int len = str.size();
		for( int i = 1; i < len; i++)
		{
			string left = str.substr( 0, i);
			string right = str.substr(i);
			string leftr = reverse(left);
			string rightr = reverse(right);
			
			s.insert(left + right);
			s.insert(leftr + right);
			s.insert(leftr + rightr);
			s.insert(left + rightr);
			s.insert(right + left);
			s.insert(rightr + left);
			s.insert(rightr + leftr);
			s.insert(right + leftr);
		}
		
		cout << s.size() <<endl;
		s.clear();
	}
	
	return 0;
}