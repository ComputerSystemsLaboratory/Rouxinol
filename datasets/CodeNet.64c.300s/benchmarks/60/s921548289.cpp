// 2011/09/21 Tazoe

#include <iostream>
using namespace std;

int main()
{
	while(true){
		int a, b;
		cin >> a >> b;
		if(a==0&&b==0)
			break;

		int DP[17][17];
		for(int y=0; y<=b; y++)
			for(int x=0; x<=a; x++)
				if(y==0||x==0)
					DP[y][x] = 0;
				else if(y==1&&x==1)
					DP[y][x] = 1;
				else
					DP[y][x] = -1;

		int n;
		cin >> n;

		for(int i=0; i<n; i++){
			int X, Y;
			cin >> X >> Y;
			DP[Y][X] = 0;
		}

		for(int y=1; y<=b; y++)
			for(int x=1; x<=a; x++)
				if(DP[y][x]==-1)
					DP[y][x] = DP[y-1][x]+DP[y][x-1];

		cout << DP[b][a] << endl;
	}

	return 0;
}