#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

#define MAXSIZE 100

int H, W;
int countType;
char plants[MAXSIZE][MAXSIZE];
int flags[MAXSIZE][MAXSIZE];
char temp;

void DFS(int i, int j) {
	flags[i][j] = 1;
	if (i + 1< H && temp == plants[i+1][j] && flags[i+1][j] != 1)
	{
		DFS(i + 1, j);
	}
	if (i - 1 >= 0 && temp == plants[i-1][j] && flags[i-1][j] != 1)
	{
		DFS(i - 1, j);
	}
	if (j + 1 < W && temp == plants[i][j+1] && flags[i][j+1] != 1)
	{
		DFS(i, j + 1);
	}
	if (j - 1>= 0 && temp == plants[i][j-1] && flags[i][j-1] != 1)
	{
		DFS(i, j - 1);
	}
}
int main() {
	while (cin >> H >> W && H!=0 && W!=0 )
	{
		countType = 0;
		for (int i = 0; i < H; i++)
		{
			for (int j = 0; j < W; j ++)
			{
				cin >> plants[i][j];
				flags[i][j] = 0;
			}
		}

		for (int i = 0; i < H; i++) {
			for (int j = 0; j < W; j++) {
				if (flags[i][j] != 1)
				{
					temp = plants[i][j];
					DFS(i, j);
					countType++;
				}
				else
				{
					continue;
				}
			}
		}
		cout << countType << endl;
	}
	return 0;
}