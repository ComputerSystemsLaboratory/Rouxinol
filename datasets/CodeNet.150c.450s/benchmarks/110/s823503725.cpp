#include <cstdio>
#include <queue>
#include <utility>
using namespace std;

typedef pair<int, int> P;

#define y first
#define x second

const int INF = 1000000000;
const int dx[] = { 1, 0, -1, 0 }, dy[] = { 0, 1, 0, -1 };

char map[1024][1024];
P start;
P goal[10];
int h, w, n;

int cheese(P s, int hp);

int main()
{
	scanf("%d %d %d", &h, &w, &n);
	for (int i = 1; i <= h; i++) scanf("%s", &map[i][1]);
	
	for (int i = 1; i <= h; i++){
		for (int j = 1; j <= w; j++){
			if (map[i][j] == 'S') start = P(i, j);
			if ('1' <= map[i][j] && map[i][j] <= '9'){
				goal[map[i][j] - '0'] = P(i, j);
			}
		}
	}
	printf("%d\n", cheese(start, 1));
}

int cheese(P s, int hp)
{
	queue<P> q;
	static int d[1024][1024];
	
	for (int i = 1; i <= h; i++){
		for (int j = 1; j <= w; j++){
			d[i][j] = INF;
		}
	}
	
	q.push(s);
	d[s.y][s.x] = 0;
	while (!q.empty()){
		P p = q.front(); q.pop();
		
		if (p == goal[hp]){
			if (hp == n) return d[p.y][p.x];
			int tmp = d[p.y][p.x];
			return tmp + cheese(p, hp + 1);
		}
		for (int i = 0; i < 4; i++){
			P np(p.y + dy[i], p.x + dx[i]);
			
			if (0 < np.y && np.y <= h && 0 < np.x && np.x <= w && map[np.y][np.x] != 'X' && d[np.y][np.x] == INF){
				q.push(np);
				d[np.y][np.x] = d[p.y][p.x] + 1;
			}
		}
	}
}