#include <iostream>
using namespace std;

#define INF (1<<30)

int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};

int main()
{
	int N,n,d;
	while(cin >> N, N)
	{
		int f[500][500];
	
		for(int y=0; y<500; y++)
		for(int x=0; x<500; x++)
		{
			f[y][x]=-1;	
		}		
		
		f[250][250] = 0;
		for(int i=1; i<N; i++)
		{
			cin >> n >> d;
			for(int y=0; y<500; y++)
			for(int x=0; x<500; x++)
			{
				if(f[y][x]==n)
				{
					f[y+dy[d]][x+dx[d]] = i;
				}
			}
		}
		
		int maxX=-INF,maxY=-INF,minX=INF,minY=INF;
		for(int y=0; y<500; y++)
		for(int x=0; x<500; x++)
		{
			if(f[y][x]!=-1)
			{
				maxX = max(maxX,x);
				maxY = max(maxY,y);
				minX = min(minX,x);
				minY = min(minY,y);				
			}
		}
		
		cout << maxX-minX+1 << " " << maxY-minY+1 << endl;
	}
}