#include <iostream>
#include <string>

using namespace std;

int fromMCXI( string s )
{
	int n = 1;
	int r = 0;
	for ( int i=0; i<(int)s.length(); i++ )
	{
		if (s[i]=='m')  r += n*1000,  n = 1;
		if (s[i]=='c')  r += n* 100,  n = 1;
		if (s[i]=='x')  r += n*  10,  n = 1;
		if (s[i]=='i')  r += n*   1,  n = 1;
		if ('2'<=s[i]&&s[i]<='9')  n = s[i]-'0';
	}

	return r;
}

string toMCXI(int num)
{
	int m = num/1000%10;
	int c = num/ 100%10;
	int x = num/  10%10;
	int i = num/   1%10;

	string r;
	if(m>=2) r+='0'+m;  if(m>=1) r+='m';
	if(c>=2) r+='0'+c;  if(c>=1) r+='c';
	if(x>=2) r+='0'+x;  if(x>=1) r+='x';
	if(i>=2) r+='0'+i;  if(i>=1) r+='i';
	
	return r;
}

int main()
{
	int n;
	cin>>n;
	for ( int i=0; i<n; i++ )
	{
		string mcxi1, mcxi2;
		cin >> mcxi1 >> mcxi2;
		cout << toMCXI(fromMCXI(mcxi1)+fromMCXI(mcxi2)) << endl;
	}
}