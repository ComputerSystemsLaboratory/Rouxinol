#include <cstdio>
#include <algorithm>
using namespace std;

typedef struct
{
	int x;
	int y;
} POS;

const int dx[] = {-1, 0, 1, 0};
const int dy[] = {0, 1, 0, -1};

POS sq[1000];
POS s, e;

int main()
{
	int N;
	
	while (scanf("%d", &N), N){
		s.x = 0;
		e.x = 0;
		s.y = 0;
		e.y = 0;
		
		sq[0].x = 0;
		sq[0].y = 0;
		
		for (int i = 1; i < N; i++){
			int n, d;
			
			scanf("%d %d", &n, &d);
			
			sq[i].x = sq[n].x + dx[d];
			sq[i].y = sq[n].y + dy[d];
			
			s.x = min(s.x, sq[i].x);
			e.x = max(e.x, sq[i].x);
			s.y = min(s.y, sq[i].y);
			e.y = max(e.y, sq[i].y);
		}
		
		printf("%d %d\n", e.x - s.x + 1, e.y - s.y + 1);
	}
	
	return 0;
}