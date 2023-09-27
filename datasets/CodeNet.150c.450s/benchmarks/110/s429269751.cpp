#include <cstdio>
#include <vector>
#include <iostream>

const int STEP_NUM = 4;
const int STEP[STEP_NUM][STEP_NUM] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};

const int MAX_SIZE = 1000;
char field[MAX_SIZE + 1][MAX_SIZE + 1];

using Position = std::pair<int,int>;

const int MAXN = 10;
Position locations[MAXN];
 
int H, W, N;

int get_shortest_distance(int current_HP)
{
	int sx = locations[current_HP-1].first;
	int sy = locations[current_HP-1].second;
	int ex = locations[current_HP].first;
	int ey = locations[current_HP].second;

	bool is_visit[MAX_SIZE + 1][MAX_SIZE + 1]={};
	is_visit[sx][sy]=true;

	std::vector<Position> frontier;
	frontier.push_back(Position{sx,sy});
	for(int step=0;step<W*H;step++)
	{
		std::vector<Position> next_frontier;
		for(auto p:frontier)
			for(int i=0;i<STEP_NUM;i++)
			{
				int nx = p.first+STEP[i][0];
				int ny = p.second+STEP[i][1];
				if(nx<0 || H<=nx) 		continue;
				if(ny<0 || W<=ny) 		continue;
				if(field[nx][ny]=='X') 	continue;
				if(is_visit[nx][ny]) 	continue;
				next_frontier.push_back(std::make_pair(nx,ny));
				is_visit[nx][ny] = true;
				if(nx==ex && ny==ey)	return step+1;
			}
		frontier = next_frontier;
	}
	return -1;
}

int solve()
{
	int total_step = 0;
	for(int i=1;i<N+1;i++)
		total_step += get_shortest_distance(i);
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
			int HP=-1;
			if(field[i][j]=='S')	HP=0;
			if(field[i][j]=='1')	HP=1;
			if(field[i][j]=='2')	HP=2;
			if(field[i][j]=='3')	HP=3;
			if(field[i][j]=='4')	HP=4;
			if(field[i][j]=='5')	HP=5;
			if(field[i][j]=='6')	HP=6;
			if(field[i][j]=='7')	HP=7;
			if(field[i][j]=='8')	HP=8;
			if(field[i][j]=='9')	HP=9;
			if(HP!=-1)
				locations[HP] = std::make_pair(i,j);
		}
	printf("%d\n", solve());
	return 0;
}