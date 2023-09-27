#include <iostream>
#include <cstdio>
#include <string>
#include <sstream>
#include <algorithm>
#include <math.h>
//#include <map>
#include <iomanip>
#include <vector>

using namespace std;

int W, H, sw, sh, cnt;
char tiles[20][20];
int dw[4] = {-1, 0, 0, 1};
int dh[4] = {0, -1, 1, 0};


void dfs(int w, int h)
{
	tiles[h][w] = '#';
	cnt++;
	
	for (int i=0; i<4; i++)
	{
		int nw = w + dw[i];
		int nh = h + dh[i];
		
		if (0<=nw && nw<W && 0<=nh && nh<H && tiles[nh][nw]=='.')
		{
			dfs(nw, nh);
		}
	}
}


int main()
{
	while (cin >> W >> H)
	{
		if (W == 0 && H == 0) break;
		
		//入力
		for (int i=0; i<H; i++)
		{
			cin >> tiles[i];
		}
		
		//スタート地点を探す
		for (int i=0; i<H; i++)
		{
			for (int j=0; j<W; j++)
			{
				if (tiles[i][j] == '@')
				{
					sw = j;
					sh = i;
					break;
				}
			}
		}
		
		cnt = 0;
		dfs(sw, sh);
		cout << cnt << endl;
		
		//cout << "sw = " << sw << " : sh = " << sh << endl;
		
		/*
		//テスト出力
		for (int i=0; i<H; i++)
		{
			cout << tiles[i] << endl;
		}
		*/
	}
	
	return 0;
}