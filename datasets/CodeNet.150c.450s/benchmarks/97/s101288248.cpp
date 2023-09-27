//互いに正方形から正方形へ、４近傍にある正方形をいくつかたどることで到達できる。
//ということは、0番の正方形とつながっている正方形が存在する。
//どれか一つの正方形の位置を(0,0)としてあげれば、(置き方は一意なので)、やるだけ。
#include<iostream>
#define int long long
using namespace std;

int n;	//1 <= n <= 200
int num[201], d[201];
int dy[4] = {0, 1, 0, -1};
int dx[4] = {-1, 0, 1, 0};

signed main()
{
	while( cin >> n )
	{
		if ( !n )
		{ 
			return 0;
		}
		
		int i, j;
		for( i = 1; i < n; i++ )
		{
			//正方形iが正方形num[i]から(dy[d[i] ], dx[d[i] ])移動したところにある。
			cin >> num[i] >> d[i];
		}
		
		bool deci[201] = {false};
		int y[201];
		int x[201];
		
		deci[0] = true;
		y[0] = 0; x[0] = 0;
		
		for( int cnt = 1; cnt < n; cnt++ ) {
			for( i = 1; i < n; i++ )
			{
				if ( deci[num[i] ] )
				{
					deci[i] = true;
					y[i] = y[num[i]] + dy[d[i]];
					x[i] = x[num[i]] + dx[d[i]];
					//cout << i << " " << y[i] << " " << x[i] << endl;
				}
			}
		}
		
		int miny = 1919810, maxy = -8332521, minx = 114514, maxx = -114514;
		for( i = 0; i < n; i++ )
		{
			miny = min(miny, y[i]);
			maxy = max(maxy, y[i]);
			minx = min(minx, x[i]);
			maxx = max(maxx, x[i]);
		}
		
		//cout << miny << " " << maxy << " " << minx << " " << maxx << endl;
		
		int h = maxy - miny + 1;
		int w = maxx - minx + 1;
		
		cout << w << " " << h << endl;
	}
	return 0;
}