#include <iostream>
#include <string>
#include <vector>
#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)

using namespace std;

int main()
{
	string s;
	int n;
	cin >> s >> n;
	
	rep(i,n)
	{
		string s2,s3;
		int x,y;

		cin >> s2;
		if(s2 == "print")
		{
			cin >> x >> y;
			REP(j,x,y+1)
			{
				cout << s[j];
			}
			cout << endl;
		}
		else if(s2 == "reverse")
		{
			cin >> x >> y;
			vector<char> v;
			REP(i,x,y+1)
			{
				v.push_back(s[i]);
			}

			REP(i,x,y+1)
			{
				s[i] = v[v.size()-1 - (i-x)];
			}
		}
		else if(s2 == "replace")
		{
			cin >> x >> y >> s3;
			REP(i,x,y+1)
			{
				s[i] = s3[i-x];
			}
		}
	}
	return 0;
}