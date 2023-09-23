#include <stdio.h>
#include <string.h>

int main(void){
	int n, m, field[21][21], num;
	int x, y, i, j;
	char vec;
	scanf("%d",&n);
	while(n != 0){
		memset(field,0,sizeof(field));
		for(i = 0;i < n;i++){
			scanf("%d%d",&x,&y);
			field[y][x] = 1;
		}
		x = y = 10;
		scanf("%d%*c",&m);
		for(i = 0;i < m;i++){
			vec = getchar();
			scanf("%d%*c",&num);
			switch(vec){
			case 'N':
				for(j = 1;j <= num;j++)
					field[y + j][x] = 0;
				y = y + num;
				break;
			case 'S':
				for(j = 1;j <= num;j++)
					field[y - j][x] = 0;
				y = y - num;
				break;
			case 'W':
				for(j = 1;j <= num;j++)
					field[y][x - j] = 0;
				x = x - num;
				break;
			case 'E':
				for(j = 1;j <= num;j++)
					field[y][x + j] = 0;
				x = x + num;
				break;
			}
		}
		for(i = 0;i <= 20;i++){
			for(j = 0;j <= 20;j++)
				if(field[i][j]) break;
			if(j != 21 && field[i][j]) break;
		}
		if(i == 21 && j == 21)
			printf("Yes\n");
		else
			printf("No\n");
		scanf("%d",&n);
	}
	return 0;
}