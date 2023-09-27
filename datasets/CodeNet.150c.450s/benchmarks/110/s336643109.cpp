// 2014/07/07 Tazoe

#include <iostream>
#include <queue>
using namespace std;

const int INF = 100000000;

struct Point{
	int x;
	int y;
};

int main()
{
	int H, W, N;
	cin >> H >> W >> N;

	char M[1002][1002];
	for(int y=0; y<H+2; y++){
		for(int x=0; x<W+2; x++){
			M[y][x] = 'X';
		}
	}

	struct Point P[10];

	for(int y=1; y<=H; y++){
		for(int x=1; x<=W; x++){
			cin >> M[y][x];

			if(M[y][x]=='S'){
				P[0].x = x;
				P[0].y = y;
			}
			else if('0'<=M[y][x] && M[y][x]<='9'){
				P[M[y][x]-'0'].x = x;
				P[M[y][x]-'0'].y = y;
			}
		}
	}

	int sum = 0;

	for(int i=0; i<N; i++){
		int d[1002][1002];
		for(int y=1; y<=H; y++){
			for(int x=1; x<=W; x++){
				d[y][x] = INF;
			}
		}

		// BFS

		queue<struct Point> que;

		struct Point p;
		p.x = P[i].x;
		p.y = P[i].y;
		que.push(p);
		d[p.y][p.x] = 0;

		while(!que.empty()){
			p = que.front();
			que.pop();

			if(p.x==P[i+1].x && p.y==P[i+1].y){
				sum += d[p.y][p.x];
				break;
			}

			if(M[p.y][p.x+1]!='X' && d[p.y][p.x+1]==INF){	// 東
				struct Point q;
				q.x = p.x+1;
				q.y = p.y;
				que.push(q);
				d[q.y][q.x] = d[p.y][p.x]+1;
			}
			if(M[p.y][p.x-1]!='X' && d[p.y][p.x-1]==INF){	// 西
				struct Point q;
				q.x = p.x-1;
				q.y = p.y;
				que.push(q);
				d[q.y][q.x] = d[p.y][p.x]+1;
			}
			if(M[p.y+1][p.x]!='X' && d[p.y+1][p.x]==INF){	// 南
				struct Point q;
				q.x = p.x;
				q.y = p.y+1;
				que.push(q);
				d[q.y][q.x] = d[p.y][p.x]+1;
			}
			if(M[p.y-1][p.x]!='X' && d[p.y-1][p.x]==INF){	// 北
				struct Point q;
				q.x = p.x;
				q.y = p.y-1;
				que.push(q);
				d[q.y][q.x] = d[p.y][p.x]+1;
			}
		}
	}

	cout << sum << endl;

	return 0;
}