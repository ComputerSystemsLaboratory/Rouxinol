#include <iostream>
#include <cstdio>
#include <algorithm>
#include <queue>

using namespace std;

int W, H, N;

struct Vector2{
	int x;
	int y;
};

bool exist(int map[2000][2000], Vector2 p, int step){
	if(p.x < 0 || p.y < 0 || p.x >= W || p.y >= H){
		return false;
	}
	if(map[p.y][p.x] > step + 1){
		map[p.y][p.x] = step + 1;
		return true;
	}
	return false;
}

int map[2000][2000];

int main(){
	
	string map_[2000];
	
	cin >> H >> W >> N;
	
	for(int i = 0; i < H; i++){
		cin >> map_[i];
	}
	
	int ans = 0;
	
	Vector2 start, goal, punct, p, p1;
	
	punct.x = -1;
	punct.y = -1;
	
	queue<Vector2> que;
	
	for(int i = 0; i < H; i++){
		for(int j = 0; j < W; j++){
			if(map_[i][j] == 'S'){
				start.x = j;
				start.y = i;
				map[i][j] = 0;
			}
		}
	}
	
	for(int loop = 0; loop < N; loop++){
		for(int i = 0; i < H; i++){
			for(int j = 0; j < W; j++){
				if(map_[i][j] == 'X'){
					map[i][j] = -1;
				}else if(map_[i][j] == '0' + loop){
					start.x = j;
					start.y = i;
					map[i][j] = 0;
				}else if(map_[i][j] == '0' + loop + 1){
					goal.x = j;
					goal.y = i;
					map[i][j] = 1 << 30;
				}else{
					map[i][j] = 1 << 30;
				}
			}
		}
		que.push(start);
		que.push(punct);
		
		bool checker = false;
		
		for(int step = 0; step < 10000000; step++){
			while(true){
				p = que.front();
				que.pop();
				if(p.x == punct.x && p.y == punct.y){
					que.push(punct);
					break;
				}else if(p.x == goal.x && p.y == goal.y){
					checker = true;
					break;
				}
				p1.x = p.x - 1;
				p1.y = p.y;
				if(exist(map, p1, step)){
					que.push(p1);
				}
				p1.x = p.x + 1;
				p1.y = p.y;
				if(exist(map, p1, step)){
					que.push(p1);
				}
				p1.x = p.x;
				p1.y = p.y - 1;
				if(exist(map, p1, step)){
					que.push(p1);
				}
				p1.x = p.x;
				p1.y = p.y + 1;
				if(exist(map, p1, step)){
					que.push(p1);
				}
			}
			if(checker){
				ans += step;
				break;
			}
		}
		
		while(!que.empty()){
			que.pop();
		}
		
		/*
		for(int i = 0; i < H; i++){
			for(int j = 0; j < W; j++){
				if(map[i][j] == 1 << 30){
					printf("0 ");
				}else{
					printf("%d ", map[i][j]);
				}
			}
			printf("\n");
		}
		*/
	}
	
	printf("%d\n", ans);
	
	return 0;
}