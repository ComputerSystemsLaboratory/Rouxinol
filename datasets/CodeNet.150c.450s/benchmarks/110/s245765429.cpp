#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <cfloat>
#include <stack>
#include <queue>
#include <vector>
#include <string>
#include <iostream>
#include <set>
#include <map>
#include <time.h>
typedef long long int ll;
typedef unsigned long long int ull;
#define BIG_NUM 2000000000
#define MOD 1000000007
#define EPS 0.000000001
using namespace std;


struct Info{
	void set(int arg_row,int arg_col){
		row = arg_row;
		col = arg_col;
	}
	int row,col;
};

struct Data{
	Data(int arg_row,int arg_col,int arg_cost){
		row = arg_row;
		col = arg_col;
		cost = arg_cost;
	}
	bool operator<(const struct Data &arg) const{
		return cost > arg.cost;
	}
	int row,col,cost;
};

int H,W,N;
int diff_row[4] = {-1,0,0,1},diff_col[4] = {0,-1,1,0};
int min_dist[1000][1000];
char base_map[1000][1001];
Info info[10];

bool rangeCheck(int row,int col){
	if(row >= 0 && row <= H-1 && col >= 0 && col <= W-1)return true;
	else{
		return false;
	}
}

int calc(int goal){

	for(int row = 0; row < H; row++){
		for(int col = 0; col < W; col++)min_dist[row][col] = BIG_NUM;
	}

	min_dist[info[goal-1].row][info[goal-1].col] = 0;

	priority_queue<Data> Q;
	Q.push(Data(info[goal-1].row,info[goal-1].col,0));

	int adj_row,adj_col;

	while(!Q.empty()){

		if(Q.top().row == info[goal].row && Q.top().col == info[goal].col){
			return Q.top().cost;
		}else if(Q.top().cost > min_dist[Q.top().row][Q.top().col]){
			Q.pop();
		}else{

			for(int i = 0; i < 4; i++){
				adj_row = Q.top().row+diff_row[i];
				adj_col = Q.top().col+diff_col[i];

				if(rangeCheck(adj_row,adj_col) == false || base_map[adj_row][adj_col] == 'X')continue;

				if(min_dist[adj_row][adj_col] > Q.top().cost+1){
					min_dist[adj_row][adj_col] = Q.top().cost+1;
					Q.push(Data(adj_row,adj_col,min_dist[adj_row][adj_col]));
				}
			}

			Q.pop();
		}
	}

}

int main(){

	scanf("%d %d %d",&H,&W,&N);

	for(int row = 0; row < H; row++){
		scanf("%s",base_map[row]);
		for(int col = 0; col < W; col++){
			if(base_map[row][col] >= '1' && base_map[row][col] <= '9'){
				info[base_map[row][col]-'0'].set(row,col);
			}else if(base_map[row][col] == 'S'){
				info[0].set(row,col);
			}
		}
	}

	int ans = 0;

	for(int i = 1; i <= N; i++)ans += calc(i);

	printf("%d\n",ans);

	return 0;
}

