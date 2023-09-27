#include <cstdio>
#include <queue>

using namespace std;


char a[101][101];
int c[101][101];

int w,h;

int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};

queue<int> xque;
queue<int> yque;


int main(){
	
	
	
	while(1){
		
		
		scanf(" %d",&h);
		scanf(" %d",&w);
		
		if(h==0 && w==0) break;
		
		for(int i=0;i<w;i++){
			for(int j=0;j<h;j++){
				c[i][j] = 0;
			}
		}
		
		int si=0,sj=0;
		for(int j=0;j<h;j++){
			for(int i=0;i<w;i++){
				scanf(" %c",&a[i][j]);
			}
		}
		int ans=0;
		for(int p=0;p<w;p++){
			for(int q=0;q<h;q++){
				
				if(c[p][q]) continue;
				
				char mk = a[p][q];
				ans++;
				xque.push(p);
				yque.push(q);
				c[si][sj] = 1;
				while(xque.size()){
					int i = xque.front(); xque.pop();
					int j = yque.front(); yque.pop();
					for(int k=0;k<4;k++){
						int nx = i+dx[k];
						int ny = j+dy[k];
						if((0<=nx)&&(nx<w)&&(0<=ny)&&(ny<h)&&(a[nx][ny]==mk)&&(c[nx][ny]==0)){
							xque.push(nx);
							yque.push(ny);
							c[nx][ny] = 1;
						}		
					}
				}
			}
		}
		
		printf("%d\n", ans);
	
	}
	
	
	return 0;
}