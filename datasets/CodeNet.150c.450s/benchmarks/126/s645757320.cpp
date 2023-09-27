#include<iostream>
#include<vector>
#include<set>
using namespace std;

int main(void){
	int w,h;
	int n;
	while(cin>>w,w){
		cin>>h>>n;
		vector<vector<int> > maze(h+1,vector<int>(w+1,0));
		
		int x,y;
		for(int i = 0 ; i < n ; i ++){
			cin>>x>>y;
			maze[--y][--x] = -1;
		}
		for(int i = 0 ; i < h ; i ++)
			if(maze[i][0] != -1)maze[i][0] = 1;
			else break;
		for(int i = 0 ; i < w ; i ++)
			if(maze[0][i] != -1)maze[0][i] = 1;
			else break;
		for(int i = 1 ; i < h ; i ++){
			for(int j = 1 ; j < w ; j ++){
				if(maze[i][j] == -1)continue;
				maze[i][j] = max(0,maze[i-1][j]) + max(0,maze[i][j-1]);
			}
		}
		cout<<maze[h-1][w-1]<<endl;
	}
}