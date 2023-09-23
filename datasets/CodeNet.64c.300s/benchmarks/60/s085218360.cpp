#include<iostream>

using namespace std;

bool cant[20][20];
long long mp[20][20];
int a,b,ans;

int main()
{
	while(cin >> a >> b,a)
	{
		for(int i = 0;i < 20;i++)for(int j = 0;j < 20;j++)
		{
			mp[i][j] = 0;
			cant[i][j] = false;
		}
		ans = 0;
		
		int n;
		cin >> n;
		
		for(int i = 0;i < n;i++)
		{
			int x,y;
			cin >> x >> y;
			cant[x-1][y-1] = true;
		}
		
		for(int i = 0;i < 20;i++)
		{
			if(cant[i][0])break;
			mp[i][0]=1;		
		}
		for(int i = 0;i < 20;i++)
		{
			if(cant[0][i])break;
			mp[0][i]=1;		
		}
		
		
		for(int i = 1;i < a ;i++)for(int j = 1;j < b;j++)
		{
			int tmp = 0;
			if(i > 0)tmp += mp[i-1][j];
			if(j > 0)tmp += mp[i][j-1];
			if(!cant[i][j])
			{
				mp[i][j] = tmp;
			}
			else
			{
				mp[i][j] = 0;
			}
			
		}

		cout << mp[a-1][b-1] << endl;
	}
	
	return 0;
}	