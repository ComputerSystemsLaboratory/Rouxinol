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


char map[100][100];
int dh[] = {0, -1, 1, 0};
int dw[] = {-1, 0, 0, 1};
int H, W, cnt;


void dfs(int h, int w, char fruit)
{
	map[h][w] = '.';
	
	for (int i=0; i<4; i++)
	{
		int nh, nw;
		
		nh = h + dh[i];
		nw = w + dw[i];
		if (0<=nh && nh<H && 0<=nw && nw<W && map[nh][nw]==fruit)
		{
			dfs(nh, nw, fruit);
		}
	}
}


int main()
{
	while (cin >> H >> W)
	{
		if (H == 0 && W == 0) break;
		
		//入力
		for (int i=0; i<H; i++)
		{
			cin >> map[i];
		}
		
		//dfs(0, 0, map[0][0]);
		
		cnt = 0;
		for (int i=0; i<H; i++)
		{
			for (int j=0; j<W; j++)
			{
				if (map[i][j] != '.')
				{
					cnt++;
					dfs(i, j, map[i][j]);
				}
			}
		}
		cout << cnt << endl;
		
		/*
		for (int i=0; i<H; i++)
		{
			cout << map[i] << endl;
		}
		*/
	}
	
	return 0;
}