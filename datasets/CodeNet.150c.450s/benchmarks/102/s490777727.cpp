#include <stdio.h>

int main()
{
	int W,H,ans;
	char map[100][100];
	scanf("%d %d",&W,&H);
	while(W != 0 && H != 0){
		for(int i = 0; i < H; i++){
			scanf("%s",map[i]);
		}
		for(int i = 0; i < 1000; i++){
			for(int j = 0; j < H - 1; j++){
				for(int k = 0; k < W; k++){
					if((map[j][k] == '.' && map[j + 1][k] == '@') || (map[j][k] == '@' && map[j + 1][k] == '.')){
						map[j][k] = '@';
						map[j + 1][k] = '@';
					}
				}
			}
			for(int j = 0; j < H; j++){
				for(int k = 0; k < W - 1; k++){
					if((map[j][k] == '.' && map[j][k + 1] == '@') || (map[j][k] == '@' && map[j][k + 1] == '.')){
						map[j][k] = '@';
						map[j][k + 1] = '@';
					}
				}
			}
		}

		ans = 0;

		for(int j = 0; j < H; j++){
			for(int k = 0; k < W; k++){
				if(map[j][k] == '@'){
					ans++;
				}
			}
		}

		printf("%d\n",ans);
		scanf("%d %d",&W,&H);
	}
	return 0;
}