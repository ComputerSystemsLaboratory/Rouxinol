#include<iostream>
#include<stack>
using namespace std;

class P
{
	public:
	int x,y;
	P(int X,int Y)
	{
		x=X;
		y=Y;
	}
};

int main()
{
	int w,h;
	while(cin>>w>>h)
	{
		if(w==0 && h==0)break;
		int ans=0;
		int field[52][52]={0};
		int flg[52][52]={0};

		for(int i=1;i<=h;i++)
		{
			for(int j=1;j<=w;j++)
			{
				cin>>field[i][j];		
			}
		}

		for(int i=1;i<=h;i++)
		{
			for(int j=1;j<=w;j++)
			{
				if(field[i][j]==0 || flg[i][j]==1)continue;
				ans++;
				stack<P> ST;
				ST.push(P(j,i));
				while(!ST.empty())
				{
					int x=ST.top().x;
					int y=ST.top().y;
					ST.pop();
					flg[y][x]=1;
					for(int y2=-1;y2<=1;y2++)
					{
						for(int x2=-1;x2<=1;x2++)
						{
							if(field[y+y2][x+x2]==0 || flg[y+y2][x+x2]==1)continue;
							ST.push(P(x+x2,y+y2));
							flg[y+y2][x+x2]=1;
						}
					}
				}
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}