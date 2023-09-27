#include<iostream>
#include<vector>

using namespace std;

int w,h;
bool field[50][50];
vector<int> ans;

void dfs(int i,int j);

int main(){
	while(1){
		for(int i = 0;i < 50;i++){
			for(int j = 0;j < 50;j++){
				field[i][j] = false;
			}
		}
		cin >> w >> h;
		if(w + h == 0) break;
		for(int i = 0;i < h;i++){
			for(int j = 0;j < w;j++){
				int f;
				cin >> f;
				if(f == 1) field[i][j] = true;
			}
		}
		int count = 0;
		for(int i = 0;i < h;i++){
			for(int j = 0;j < w;j++){
				if(field[i][j]){dfs(i,j);count++;}
			}
		}
		ans.push_back(count);
	}
	for(int i = 0;i < ans.size();i++) cout << ans[i] << endl;
	return 0;
}

void dfs(int i,int j){
	field[i][j] = false;
	if(i != 0 	&& j != 0 	&& field[i-1][j-1])dfs(i-1,j-1);
	if(i != 0 				&& field[i-1][j])dfs(i-1,j);
	if(i != 0 	&& j != w-1 && field[i-1][j+1])dfs(i-1,j+1);
	if(			   j != w-1 && field[i][j+1])dfs(i,j+1);
	if(i != h-1 && j != w-1 && field[i+1][j+1])dfs(i+1,j+1);
	if(i != h-1 			&& field[i+1][j])dfs(i+1,j);
	if(i != h-1 && j != 0 	&& field[i+1][j-1])dfs(i+1,j-1);
	if(			   j != 0 	&& field[i][j-1])dfs(i,j-1);
}