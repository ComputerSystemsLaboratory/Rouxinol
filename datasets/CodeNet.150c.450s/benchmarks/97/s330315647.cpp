#include<iostream>

using namespace std;

int x[300],y[300];

int dx[4] = {-1,0,1,0};
int dy[4] = {0,-1,0,1};

int main()
{
	int N,n,d;
	while(cin >> N,N)
	{
			
		for(int i = 0;i < N-1;i++)
		{
			cin >> n >> d;
			x[i+1] = x[n] + dx[d];
			y[i+1] = y[n] + dy[d];
		}
		
		int xmin = 10000,xmax = -10000,ymin = 10000,ymax = -10000;
		for(int i = 0;i < N;i++)
		{
			xmin = min(xmin,x[i]);
			xmax = max(xmax,x[i]);
			ymin = min(ymin,y[i]);
			ymax = max(ymax,y[i]);
		}
		
		cout << xmax - xmin + 1 << ' ' << ymax - ymin + 1 << endl;
	}
	
	return 0;
}