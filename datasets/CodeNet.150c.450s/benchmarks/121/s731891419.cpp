#include <cstdio>
#include <queue>
#include <cstring>
using namespace std;

char area[200][200];

typedef pair<int, int> P;
#define x first
#define y second
/* struct P{
	int x, y;
};*/

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, -1, 0, 1};

int main()
{
	int w, h, area_sum;
	
	while (scanf("%d%d", &h, &w), h != 0 && w != 0){
		
		memset(area, 0, sizeof(area));
		
		area_sum = 0;
		for (int i = 1; i <= h; i++){
			for (int j = 1; j <= w; j++)scanf(" %c", &area[j][i]);
		}
		
		for (int i = 1; i <= h; i++){
			for (int j = 1; j <= w; j++){
				if (area[j][i]){
					queue<P> que;
					que.push(P(j, i));
					while (!que.empty()){
						P st = que.front();
						que.pop();
						if (!area[st.x][st.y])continue;
						for (int k = 0; k < 4; k++){
							if (area[st.x][st.y] == area[st.x + dx[k]][st.y + dy[k]]){
								que.push(P(st.x + dx[k], st.y + dy[k]));
							}
						}
						area[st.x][st.y] = 0;
						
					}
					area_sum++;
				}
			}
		}
		
		printf("%d\n", area_sum);
	}
}