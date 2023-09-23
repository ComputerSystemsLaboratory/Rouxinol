#include<iostream>
#include<cstring>
using namespace std;


int n,m;
const char vec[4]={'N','E','W','S'};
const int   dx[4]={ 0 , 1 ,-1 , 0 };
const int   dy[4]={ 1 , 0 , 0 , -1};
int gx[20],gy[20];
char v; int vn;

int main()
{
	while(cin>>n,n)
	{
		for(int i=0;i<n;i++)
		{
			cin>>gx[i]>>gy[i];
		}

		cin>>m;
		int sx=10,sy=10,gnum=0;
		bool flag[20]; memset(flag,false,sizeof flag);
		for(int i=0;i<m;i++)
		{
			cin>>v>>vn;
			int cnt;
			for(int j=0;j<4;j++)
			{
				if(vec[j]==v) {cnt=j; break;}
			}

			while(vn--)
			{
				sx+=dx[cnt];sy+=dy[cnt];
				for(int j=0;j<n;j++)
				{
					if(sx==gx[j]&&sy==gy[j]&&!flag[j])
					{
						gnum++;
						flag[j]=true;
					}
				}
			}
		}
		cout<<(gnum==n?"Yes":"No")<<endl;
	}
	return 0;
}