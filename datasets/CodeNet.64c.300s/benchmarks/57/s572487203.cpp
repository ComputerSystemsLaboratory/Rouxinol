#include<iostream>

using namespace std;

int map[11][10001];
int turn[11];
int r,c,ans;

void serch(int n)
{
	int i,j;
	if(n==r)
	{
		int ss;
		int ssans=0;
		for(i=0;i<c;i++)
		{
			ss=0;
			for(j=0;j<r;j++)
			{
//				cout << map[j][i] << " " ;
				if(turn[j]==0)
				{
					if(map[j][i]==1)
						ss++;
				}
				else if(turn[j]==1)
				{
					if(map[j][i]==0)
						ss++;
				}
			}
//			cout << endl;
			if(ss<=r/2)
			{
//				cout << "ss1:" << r-ss << endl;
				ssans+=r-ss;
			}
			else
			{
//				cout << "ss2:" << ss << endl;
				ssans+=ss;
			}
//			cout << "ssans:" << ssans << endl;
		}
		if(ans<ssans)
			ans=ssans;
		return ;
	}
		turn[n]=0;
		serch(n+1);
		turn[n]=1;
		serch(n+1);
	return ;
}
int main()
{
	int i,j;
	
	for(;;)
	{
		cin >> r >> c ;
		if(r==0 && c==0)
			break;
		
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				cin >> map[i][j] ;
			}
		}
		
		ans=0;
		
		serch(0);
		
		cout << ans << endl;
	}
}