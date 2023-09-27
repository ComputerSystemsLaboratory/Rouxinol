#include <cstdio>
#include <string>
#include <iostream>
using namespace std;

const int dx[] = {-1, 0, 1, 0};
const int dy[] = {0, -1, 0, 1};
char tile[40][40];
int h, w;

int search(int nx, int ny)
{
	int sum = 0;
	if (ny == 0 || nx == 0 || ny == h + 1 || nx == w + 1)return (sum);
	if (tile[nx][ny] == '.' || tile[nx][ny] == '@'){
		sum++;
	}
	
	tile[nx][ny] = '#';
	
	for (int i = 0; i < 4; i++){
		if (tile[nx + dx[i]][ny + dy[i]] != '#'){
			sum += search(nx + dx[i], ny + dy[i]);
		}
	}
	return (sum);
}
		
int main()
{
	while (1){
		
		scanf("%d %d", &w, &h);
		
		if (h == 0 && w == 0)return (0);
		int mx, my;
		for (int i = 1; i <= h; i++){
			for (int j = 1; j <= w; j++){
				scanf(" %c", &tile[j][i]);
				if (tile[j][i] == '@'){
					mx = j;
					my = i;
				}
			}
		}
		printf("%d\n", search(mx, my));
	}

}