#include <cstdio>
#include <cstring>
using namespace std;

typedef long long Int;
#define MAX_L 16
Int table[MAX_L + 1][MAX_L + 1];
bool wall[MAX_L + 1][MAX_L + 1];
int a, b, n;

Int dp(int x, int y){
	if(x == a && y == b) return 1;
	if(x > a || y > b) return 0;
	if(table[x][y] >= 0) return table[x][y];
	if(wall[x][y]) return 0;
	
	return table[x][y] = dp(x + 1, y) + dp(x, y + 1);
}

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
		
		memset(table, -1, sizeof(table));
		
		printf("%lld\n", dp(1, 1));
	}
}