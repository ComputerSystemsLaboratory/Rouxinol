#include <iostream>
#include <string>

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)

using namespace std;

string s[101];
int count = 0;
int n,m;
bool flag = true;

void dfs(char c,int i,int j)
{
	s[i][j] = '.';
	if(i+1 < n && s[i+1][j] == c)
	{
		dfs(c,i+1,j);
	}
	if(i-1 >= 0 && s[i-1][j] == c)
	{
		dfs(c,i-1,j);
	}
	if(j+1 < m && s[i][j+1] == c)
	{
		dfs(c,i,j+1);
	}
	if(j-1 >= 0 && s[i][j-1] == c)
	{
		dfs(c,i,j-1);
	}
	
}

int main()
{
	while(cin >> n >> m)
	{
		if(n == 0 && m == 0) break;

		count = 0;
		rep(i,n) cin >> s[i];

		
		rep(i,n)
		{
			rep(j,m)
			{
				if(s[i][j] != '.')
				{
					dfs(s[i][j],i,j);
					count++;
				}
			}
		}
		
		cout << count << endl;
	}

	return 0;
}