#include <cstdio>
#include <vector>
#include <ctype.h>

const int MAX_SIZE = 1000;
char field[MAX_SIZE + 1][MAX_SIZE + 1];

const int STEP_NUM = 4;
const int STEP[STEP_NUM][STEP_NUM] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};

using Position = std::pair<int,int>;

const int MAXN = 10;
Position locations[MAXN];
 
int H, W, N;

int get_shortest_distance(Position &start, Position &goal)
{
	bool is_visit[MAX_SIZE + 1][MAX_SIZE + 1]={};
	is_visit[start.first][start.second]=true;

	std::vector<Position> frontier(1,start);
	for(int step=0;step<W*H;step++)
	{
		std::vector<Position> next_frontier;
		for(auto p:frontier)
			for(int i=0;i<STEP_NUM;i++)
			{
				int nx = p.first+STEP[i][0];
				int ny = p.second+STEP[i][1];
				if(nx==goal.first && ny==goal.second)	return step+1;
				if(nx<0 || H<=nx) 		continue;
				if(ny<0 || W<=ny) 		continue;
				if(field[nx][ny]=='X') 	continue;
				if(is_visit[nx][ny]) 	continue;
				next_frontier.push_back(std::make_pair(nx,ny));
				is_visit[nx][ny] = true;
			}
		frontier = next_frontier;
	}
	return -1;
}

int solve()
{
	int total_step = 0;
	for(int i=1;i<N+1;i++)
		total_step += get_shortest_distance(locations[i-1],locations[i]);
	return total_step;
}

int main()
{
	scanf("%d %d %d", &H, &W, &N);
	for(int i=0; i<H; i++)
		scanf("%s", field[i]);
	for(int i=0; i<H; i++)
		for(int j=0; j<W; j++)
		{
			if(field[i][j]=='S')
				locations[0] = std::make_pair(i,j);
			if(isdigit(field[i][j]))
				locations[field[i][j]-'0'] = std::make_pair(i,j);
		}
	printf("%d\n", solve());
	return 0;
}