#include <iostream>
using namespace std;

int dx[] = {-1, 0,+1, 0};
int dy[] = { 0,+1, 0,-1};

int sx[256];
int sy[256];


int main()
{
	int N,n,d;
	while(cin >> N, N)
	{
		sx[0] = sy[0] = 0;
	
		for(int i=1; i<N; i++)
		{
			cin >> n >> d;
			sx[i] = sx[n]+dx[d];
			sy[i] = sy[n]+dy[d];
		}

		int minx=(1<<20), maxx=-(1<<20);
		int miny=(1<<20), maxy=-(1<<20);
		for(int i=0; i<N; i++)
		{
			minx = min(minx,sx[i]);
			maxx = max(maxx,sx[i]);
			miny = min(miny,sy[i]);
			maxy = max(maxy,sy[i]);
		}
		cout << maxx-minx+1 << " " << maxy-miny+1 << endl;
	}
}