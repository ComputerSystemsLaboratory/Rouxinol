#include <iostream>
#include <cstdio>
#include <string>
#include <sstream>
#include <algorithm>
#include <math.h>
#include <map>
#include <iomanip>
#include <vector>
#include <queue>



using namespace std;


char grid[21][21];


int main()
{
	int N, M, in_x, in_y, l, now_x, now_y;
	char d;
	
	while (cin >> N)
	{
		if (N == 0) break;
		
		//gridの初期化
		for (int y=0; y<21; y++)
		{
			for (int x=0; x<21; x++)
			{
				grid[y][x] = '.';
			}
		}
		
		//宝石の位置の入力
		for (int i=0; i<N; i++)
		{
			cin >> in_x >> in_y;
			grid[in_y][in_x] = '#';
		}
		
		cin >> M;
		now_x = now_y = 10;
		for (int i=0; i<M; i++)
		{
			cin >> d >> l;
			for (int j=1; j<=l; j++)
			{
				if (d == 'N')
				{
					grid[now_y + j][now_x] = '.';
					if (j == l)
					{
						now_y += j;
					}
				} else if (d == 'E') {
					grid[now_y][now_x + j] = '.';
					if (j == l)
					{
						now_x += j;
					}
				} else if (d == 'S') {
					grid[now_y - j][now_x] = '.';
					if (j == l)
					{
						now_y -= j;
					}
				} else if (d == 'W') {
					grid[now_y][now_x - j] = '.';
					if (j == l)
					{
						now_x -= j;
					}
				}
			}
		}
		
		bool flag = false;	//宝石が一つでも残っていたらtrueになる
		for (int y=0; y<21; y++)
		{
			for (int x=0; x<21; x++)
			{
				if (grid[y][x] == '#')
				{
					flag = true;
				}
			}
		}
		if (flag)
		{
			cout << "No" << endl;
		} else {
			cout << "Yes" << endl;
		}
		/*
		//テスト出力
		for (int y=20; y>=0; y--)
		{
			for (int x=0; x<21; x++)
			{
				cout << grid[y][x];
			}
			cout << endl;
		}
		*/
	}
	
	return 0;
}