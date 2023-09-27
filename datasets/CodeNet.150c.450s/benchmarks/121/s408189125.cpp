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
     
    while (scanf("%d%d", &h, &w), h + w){
         
        memset(area, 0, sizeof(area));
         
        area_sum = 0;
        for (int i = 1; i <= h; i++){
            for (int j = 1; j <= w; j++){
				scanf(" %c", &area[j][i]);
            }
        }
         
        for (int i = 1; i <= h; i++){
            for (int j = 1; j <= w; j++){
                if (area[j][i]){
					//printf("%d %d\n", j, i);
                    queue<P> que;
                    que.push(P(j, i));
                    while (que.size()){
                        P st = que.front();
                        que.pop();
                        if (area[st.x][st.y] == 0)continue;
                        for (int dir = 0; dir < 4; dir++){
                            if (area[st.x][st.y] == area[st.x + dx[dir]][st.y + dy[dir]]){
                                que.push(P(st.x + dx[dir], st.y + dy[dir]));
                            }
                        }
                        area[st.x][st.y] = 0;
                         
                    }
                    area_sum++;
                }
            }
        }
		
		for (int i = 1; i <= 3; i++){
			for (int j = 1; j <= 10; j++){
				//printf("%d ", area[j][i]);
			}
			//puts("");
		}
         
        printf("%d\n", area_sum);
    }
}