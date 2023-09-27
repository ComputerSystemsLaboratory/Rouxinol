#include <iostream>
#include <string>
using namespace std;

string one=".,!? ";
string les=".adgjmptw";

int main()
{
	int N;
	cin >> N;
	while(N--)
	{
		string s;
		cin >> s;
		char n='_';
		int l=0;
		for(int i=0; i<s.size(); i++)
		{
			int d=s[i]-'0';
			if(d==0)
			{
				if(n=='_') continue;
				if(n=='.') cout << one[l];
				else cout << (char)(n+l);
				n='_';
				l=0;
			}
			else
			{
				if(n=='_')
				{
					n=les[d-1];
				}
				else
				{

					int mod=3;
					if(d==1) mod=5;
					if(d==7||d==9) mod=4;
					l++;
					l%=mod;
				}
			}
		}

		cout << endl;
	}
}