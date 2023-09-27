#include<cstdio>

using namespace std;

int h,w;
const int MAX_H = 100;
const int MAX_W = 100;
char fruit[MAX_H][MAX_W];

void dfs(char c, int i, int j){
	if(fruit[i][j] == c){
		fruit[i][j] = '.';
		if(0<=i-1)dfs(c,i-1,j);
		if(i+1<h) dfs(c,i+1,j);
		if(0<=j-1)dfs(c,i,j-1);
		if(j+1<w) dfs(c,i,j+1);
	}
}

int main(){
	char tmp;
	while(true){
		scanf("%d %d",&h,&w);
		if(h==0 && w==0)break;
		for(int i=0;i<h;i++){
			for(int j=0;j<w;j++){
				scanf(" %c",&fruit[i][j]);
			}
		}
		int ans = 0;
		for(int i=0;i<h;i++){
			for(int j=0;j<w;j++){
				if(fruit[i][j] != '.'){
					dfs(fruit[i][j],i,j);
					ans++;
				}
			}
		}
		printf("%d\n",ans);
	}
}