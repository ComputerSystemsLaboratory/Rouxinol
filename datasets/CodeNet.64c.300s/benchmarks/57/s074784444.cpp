#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstdlib>

using namespace std;

int r,c;
int ma[11][10100];
int memo[11];
int kokoko;
int tmp,mi;
int ans;

int main()
{
	while(1)
	{
		cin >> r >> c ;
		if(r+c == 0) break;
		for(int i = 0; i < r;i++)
		{
			for(int j = 0;j < c;j++)
			{				
				cin >> ma[i][j];
			}
		}
		int con = pow(2,r);
		for(int i = 0;i < con;i++)
		{
			tmp = 0;
			int s = i;
			for(int j = 0;j < r;j++)
			{
				memo[j] = s %2;s /= 2;
			}
 
			for(int j = 0; j < c;j++)
			{
				kokoko = 0;
				for(int k = 0;k < r;k++)
				{
					kokoko += memo[k] ^ ma[k][j];
				}
				tmp += max(kokoko,r - kokoko);
			}
			mi = max(mi,tmp);
		}
		cout << mi << endl;
	}
	return 0;
}