//
//  main.cpp

#include <iostream>
#include <queue>
using namespace std;
using ll = long long;
const ll MAX = 10000000000000;
int h,w,n;
bool matrix[1001][1001]={{}};
bool visited[1001][1001]={{}};
pair<int,int> target;
struct state{
	int x;
	int y;
	int depth;
};

ll min(ll x,ll y){
	if(x < y){
		return x;
	}else{
		return y;
	}
}

/*

ll dfs(ll depth,int x,int y){
	if(!matrix[x][y])return MAX;
	if(target.first == x && target.second == y)return depth;
	
	ll a,b,c,d;
	a = b = c = d = MAX;
	if(!visited[x+1][y]){
		visited[x+1][y] = true;
		a = dfs(depth+1,x+1,y);
		visited[x+1][y] = false;
	}
	if(!visited[x-1][y]){
		visited[x-1][y] = true;
		b = dfs(depth+1,x-1,y);
		visited[x-1][y] = false;
	}
	if(!visited[x][y+1]){
		visited[x][y+1] = true;
		c = dfs(depth+1,x,y+1);
		visited[x][y+1] = false;
	}
	if(!visited[x][y-1]){
		visited[x][y-1] = true;
		d = dfs(depth+1,x,y-1);
		visited[x][y-1] = false;
	}
	return min(a,min(b,min(c,d)));
}
*/
ll bfs(int x,int y){
	queue<state> willvisit;
	willvisit.push({x,y,0});
	ll ret;
	while(1){
		if(willvisit.empty())break;
		state now = willvisit.front();
		willvisit.pop();
		
		if(now.x == target.first && now.y == target.second){
			ret = now.depth;
			break;
		}
		if(!visited[now.x+1][now.y]){
			if(matrix[now.x+1][now.y]){
				visited[now.x+1][now.y] = true;
				willvisit.push({now.x+1,now.y,now.depth+1});
			}
		}
		if(!visited[now.x-1][now.y]){
			if(matrix[now.x-1][now.y]){
				visited[now.x-1][now.y] = true;
				willvisit.push({now.x-1,now.y,now.depth+1});
			}
		}
		if(!visited[now.x][now.y+1]){
			if(matrix[now.x][now.y+1]){
				visited[now.x][now.y+1] = true;
				willvisit.push({now.x,now.y+1,now.depth+1});
			}
		}
		if(!visited[now.x][now.y-1]){
			if(matrix[now.x][now.y-1]){
				visited[now.x][now.y-1] = true;
				willvisit.push({now.x,now.y-1,now.depth+1});
			}
		}
	}
	
	return ret;
}

void visitedReset(){
	for(int i=0;i<1001;i++){
		for(int j=0;j<1001;j++){
			visited[i][j] = false;
		}
	}
}

int main(){
	for(int i=0;i<1001;i++){
		for(int j=0;j<1001;j++){
			matrix[i][j] = visited[i][j] = false;
		}
	}
	
	cin >> h >> w >> n;
	pair<int,int> cheese[10];
	for(int i=1;i<=h;i++){
		for(int j=1;j<=w;j++){
			char input;
			cin >> input;
			switch(input){
				case '.':
					matrix[i][j] = true;
					break;
				case 'X':
					matrix[i][j] = false;
					break;
				case 'S':
					matrix[i][j] = true;
					cheese[0] = make_pair(i,j);
					break;
				default:
					matrix[i][j] = true;
					cheese[input - '0'] = make_pair(i,j);
					break;
			}
		}
	}
	
	ll answer=0;
	for(int i=0;i<n;i++){
		target = cheese[i+1];
		visited[cheese[i].first][cheese[i].second] = true;
		answer += bfs(cheese[i].first,cheese[i].second);
		visitedReset();
	}
	/*
	for(int i=0;i<n;i++){
		target = cheese[i+1];
		visited[cheese[i].first][cheese[i].second] = true;
		answer += dfs(0,cheese[i].first,cheese[i].second);
		visited[cheese[i].first][cheese[i].second] = false;
	}
	*/
	cout << answer << endl;
	return 0;
}