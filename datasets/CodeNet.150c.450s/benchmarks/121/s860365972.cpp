#include <iostream>

int H, M;
int map[102][102];
char scan;
int count;

void search(int kind,int x,int y)
{
	map[x][y] = 0;
	if (map[x+1][y]==kind)search(kind,x+1, y);
	if (map[x][y+1]==kind)search(kind,x, y+1);
	if (map[x-1][y]==kind)search(kind,x-1, y);
	if (map[x][y-1]==kind)search(kind,x, y-1);
}

int main()
{

	while (true)
	{
		std::cin >> H;
		std::cin >> M;
		if (H + M == 0)break;
		count = 0;
		for (int j = 1; j <= H; j++)
		{
			for (int i = 1; i <= M; i++)
			{
				std::cin >> scan;
				switch (scan)
				{
				case '#':
					scan = 1;
					break;
				case '*':
					scan = 2;
					break;
				case '@':
					scan = 3;
					break;
				default:
					scan = 0;
				}
				map[j][i] = scan;
			}
		}
		for (int j = 1; j <= H; j++)
		{
			for (int i = 1; i <= M; i++)
			{
				if (map[j][i])
				{
					search(map[j][i],j,i);
					count++; 
				}
			}
		}
		std::cout << count << std::endl;
	}
}

/*
for (int j = 0; j < H; j++)
{
for (int i = 0; i < M; i++)
{
if (map[j][i])
{
}
}
}*/