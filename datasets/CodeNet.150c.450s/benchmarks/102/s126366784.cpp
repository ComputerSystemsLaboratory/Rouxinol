#include<iostream>
#include<vector>

using namespace std;
vector<int> ans;
int cf[20][20];
bool field[20][20];
int w,h;
void dfs(int i,int j,int count);

int main(){
	while(1){
		cin >> w >> h;
		if(w + h == 0) break;
		for(int i = 0;i < 20;i++){
			for(int j = 0;j < 20;j++){
				cf[i][j] = -1;
				field[i][j] = false;
			}
		}
		
		int px,py;
		for(int i = 0;i < h;i++){
			for(int j = 0;j < w;j++){
				char t;
				cin >> t;
				if(t == '.') field[i][j] = true;
				else if(t == '@'){ px = j; py = i;field[i][j] = true;}
			}
		}
		
		int counta = 0;
		for(int i = 0;i < h;i++){
			for(int j = 0;j < w;j++){
				if(field[i][j] && cf[i][j] == -1){
					dfs(i,j,counta);
					counta++;
				}
			}
		}
		
		int pn = cf[py][px];
		int count = 0;
		for(int i = 0;i < h;i++){
			for(int j = 0;j < w;j++){
				if(cf[i][j] == pn) count++;
			}
		}
		
		ans.push_back(count);
	}
	for(int i = 0;i < ans.size();i++) cout << ans[i] << endl;
	return 0;
}

void dfs(int i,int j,int count){
	cf[i][j] = count;
	if(i != 0 && field[i-1][j] && cf[i-1][j] == -1) dfs(i-1,j,count);
	if(i != h-1 && field[i+1][j] && cf[i+1][j] == -1) dfs(i+1,j,count);
	if(j != 0 && field[i][j-1] && cf[i][j-1] == -1) dfs(i,j-1,count);
	if(j != w-1 && field[i][j+1] && cf[i][j+1] == -1) dfs(i,j+1,count);
}