#include <cstdio>
using namespace std;

int main()
{
	int num;
	while (scanf("%d", &num), num){
		int map[100][100] = {0};
		
		for (int i = 0; i < num; i++){
			int x, y;
			scanf("%d %d", &x, &y);
			map[x][y] = 1;
		}
		
		int X = 10;
		int Y = 10;
		
		int M;
		scanf("%d", &M);
		for (int i = 0; i < M; i++){
			char c;
			int l;
			scanf(" %c %d", &c, &l);
			
			while (l > 0){
				switch (c){
					case 'N':
					Y++;
					break;
					
					case 'E':
					X++;
					break;
					
					case 'S':
					Y--;
					break;
					
					case 'W':
					X--;
					break;
				}
				num -= map[X][Y];
				map[X][Y] = 0;
				l--;
			}
		}
		
		if (num == 0){
			puts("Yes");
		}
		else {
			puts("No");
		}
	}
	
	return 0;
}