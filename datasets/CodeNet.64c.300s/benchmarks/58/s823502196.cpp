#include <cstdio>
#include <algorithm>
#define MAX_WH 100
using namespace std;


int w,h;//h:i,w:j


char board[MAX_WH][MAX_WH];
bool check[MAX_WH][MAX_WH];

int vx[4] = {1,-1,0,0};
int vy[4] = {0,0,1,-1};

void back(char c, int i, int j){
	check[i][j] = true;
	for(int k=0;k<4;k++){
		int pi,pj;
		pi = i + vx[k];
		pj = j + vy[k];
		if(-1<pi && pi<h && -1<pj && pj<w){
			if(board[pi][pj] == c && !check[pi][pj]){
				back(c,pi,pj);
			}
		}
	}
}

int solve(){
	int sum=0;
	for(int i=0;i<h;i++){
		for(int j=0;j<w;j++){
			check[i][j] = false;
		}
	}
	
	for(int i=0;i<h;i++){
		for(int j=0;j<w;j++){
			if(!check[i][j]){
				check[i][j] = true;
				back(board[i][j], i, j);
				sum++;
			}
		}
	}
	return sum;
}	

int main(){
	while(1){
		scanf(" %d %d",&h,&w);
		if(w==0 && h==0) break;
		
		for(int i=0;i<h;i++){
			for(int j=0;j<w;j++){
				scanf(" %c",&board[i][j]);
			}
		}
		printf("%d\n",solve());
		
	}
	return 0;
}