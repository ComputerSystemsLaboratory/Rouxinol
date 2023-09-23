#include <cstdio>
#include <cstring>
using namespace std;

#define MAX_L 16
int table[MAX_L + 1][MAX_L + 1];
bool wall[MAX_L + 1][MAX_L + 1];
int a, b, n;

int main(){
	while(1){
		scanf("%d%d", &a, &b);
		if(a == 0 && b == 0) return 0;
		scanf("%d", &n);
		
		int in_x, in_y;
		
		memset(wall, 0, sizeof(wall));
		for(int i = 0; i < n; i++){
			scanf("%d%d", &in_x, &in_y);
			wall[in_x][in_y] = true;
		}
		
		memset(table, 0, sizeof(table));
		
		table[1][1] = 1;
		for(int y = 1; y <= b; y++){
			for(int x = 1; x <= a; x++){
				if(wall[x][y] || (x == 1 && y == 1)) continue;
				table[x][y] = table[x - 1][y] + table[x][y - 1];
			}
		}
		
		printf("%d\n", table[a][b]);
	}
}