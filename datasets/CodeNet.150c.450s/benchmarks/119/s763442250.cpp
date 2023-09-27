#include <stdio.h>

int W,H,ans;
int map[100][100];

void search_island(int x, int y){
	map[x][y] = 0;
	if(x > 0){
		if(map[x - 1][y]){
			search_island(x - 1, y);
		}
		if(y > 0){
			if(map[x - 1][y - 1]){
				search_island(x - 1, y - 1);
			}
		}
		if(y < W - 1){
			if(map[x - 1][y + 1]){
				search_island(x - 1, y + 1);
			}
		}
	}
	if(x < H - 1){
		if(map[x + 1][y]){
			search_island(x + 1, y);
		}
		
		if(y > 0){
			if(map[x + 1][y - 1]){
				search_island(x + 1, y - 1);
			}
		}
		if(y < W - 1){
			if(map[x + 1][y + 1]){
				search_island(x + 1, y + 1);
			}
		}
	}
	if(y > 0){
		if(map[x][y - 1]){
			search_island(x, y - 1);
		}
	}
	if(y < W - 1){
		if(map[x][y + 1]){
			search_island(x, y + 1);
		}
	}
}


int main()
{
	scanf("%d %d",&W,&H);
	while(W != 0 && H != 0){
		for(int i = 0; i < H; i++){
			for(int k = 0; k < W; k++){
				scanf("%d",&map[i][k]);
			}
		}

		ans = 0;

		for(int j = 0; j < H; j++){
			for(int k = 0; k < W; k++){
				if(map[j][k]){
					ans++;
					search_island(j,k);
				}
			}
		}

		printf("%d\n",ans);
		scanf("%d %d",&W,&H);
	}
	return 0;
}