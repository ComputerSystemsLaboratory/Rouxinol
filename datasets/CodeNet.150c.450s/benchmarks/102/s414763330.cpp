#include <iostream>
#include <queue>
#include <utility>

using namespace std;

#define MAX 20

bool map[MAX + 2][MAX + 2];
bool visited[MAX + 2][MAX + 2];

int vs[] = {0, 1, 0, -1};

int main() {
	
	while(true){
		int W, H;
		cin >> W >> H;
		
		if(W == 0 && H == 0){
			break;
		}
		
		for(int i = 0; i < MAX + 2; i++){
			for(int j = 0; j < MAX + 2; j++){
				map[i][j] = false;
				visited[i][j] = false;
			}
		}
		
		int rx = -1, ry = -1;
		for(int i = 0; i < H; i++){
			string line;
			cin >> line;
			
			for(int j = 0; j < W; j++){
				if(line[j] != '#'){
					map[i + 1][j + 1] = true;
					
					if(line[j] == '@'){
						rx = j + 1;
						ry = i + 1;
					}
				}
			}
		}
		
		queue<pair<int, int> > queue;
		queue.push(pair<int, int>(rx, ry));
		visited[ry][rx] = true;
		int count = 0;
		while(!queue.empty()){
			pair<int, int> point = queue.front();
			queue.pop();
			count++;
			
			const int x = point.first;
			const int y = point.second;
			
			for(int i = 0; i < 4; i++){
				const int nx = x + vs[i];
				const int ny = y + vs[(i + 1) % 4];
				
				if(visited[ny][nx]){ continue; }
				if(!map[ny][nx]) { continue; }
				
				queue.push(pair<int, int>(nx, ny));
				visited[ny][nx] = true;
			}
		}
		
		cout << count << endl;
	}
	

	return 0;
}