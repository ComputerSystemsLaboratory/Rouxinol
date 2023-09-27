#include <iostream>

#define rep(i,n)     for(int i=0;i<n;++i)

using namespace std;

const int D[4] = { -1, 0, 1, 0 }; // High School DxD
int tiles[200][2];

int main()
{
	int N;
	while(cin>>N,N)
	{
		tiles[0][0] = tiles[0][1] = 0;
		rep(i,N-1)
		{
			int n,d;
			cin>>n>>d;
			tiles[i + 1][0] = tiles[n][0] + D[d];
			tiles[i + 1][1] = tiles[n][1] + D[(d + 1) % 4];
		}
		int min_x = 1<<20, min_y = 1<<20, max_x = 0, max_y = 0;
		rep(i,N)
		{
			min_x = min(min_x, tiles[i][0]);
			max_x = max(max_x, tiles[i][0]);
			min_y = min(min_y, tiles[i][1]);
			max_y = max(max_y, tiles[i][1]);
		}
		cout << (max_x - min_x + 1) << " " << (max_y - min_y + 1) << endl;
	}
	return 0;
}