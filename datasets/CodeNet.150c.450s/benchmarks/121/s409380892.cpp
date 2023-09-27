#include<cstdio>
using namespace std;
int H,W;
char dis[100][100];
char tmpdis;
void dfs(int x,int y){
	tmpdis=dis[x][y];
	dis[x][y]='.';
	int xdi[4]={0,1,0,-1},ydi[4]={1,0,-1,0};
	for(int i=0;i<4;i++){
		int nx=x+xdi[i],ny=y+ydi[i];
		if(nx>=0&&nx<H&&ny>=0&&ny<W&&dis[nx][ny]==tmpdis){
			dfs(nx,ny);
		}
	}
}
int main(){
	while(scanf("%d%d",&H,&W)){
		if(H!=0&&W!=0){
			for(int i=0;i<H;i++){
				getchar(); 
		        for(int j=0;j<W;j++){
			        scanf("%c",&dis[i][j]);
		        }
	        }
	    int res=0;
	    for(int i=0;i<H;i++){
		    for(int j=0;j<W;j++){
			    if(dis[i][j]=='@'||dis[i][j]=='#'||dis[i][j]=='*'){
				    dfs(i,j);
				    res++;
			    }
		    }
	    }
	    printf("%d\n",res);
	
		}
		else
		    break;
	}
	
	return 0;
}