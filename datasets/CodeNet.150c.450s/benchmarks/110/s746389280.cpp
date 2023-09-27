#include <cstdio>
#include <queue>
#include <climits>

#define N 1001
using namespace std;


char a[N][N];
int c[N][N];

int w,h,n;

int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};

char cz[10] = {'0','1','2','3','4','5','6','7','8','9'};

queue<int> xque;
queue<int> yque;


int main(){
	
	
	
		
		
		scanf(" %d",&h);
		scanf(" %d",&w);
        scanf(" %d",&n);
		
		
		
		
		int si=0,sj=0;
		for(int j=0;j<h;j++){
			for(int i=0;i<w;i++){
				scanf(" %c",&a[i][j]);
				if(a[i][j] == 'S'){
					si=i; sj=j;
				} 
			}
		}
		
		int ans=0;
        for(int p=1;p<=n;p++){
            for(int i=0;i<w;i++){
			 for(int j=0;j<h;j++){
			    c[i][j] = 100000000;
			 }
		    }
            while(xque.size()){
                xque.pop();
                yque.pop();
            }
            xque.push(si);
            yque.push(sj);
            c[si][sj] = 0;
            while(xque.size()){
                int i = xque.front(); xque.pop();
                int j = yque.front(); yque.pop();
                
                if(a[i][j] == cz[p]){
                    ans += c[i][j];
                    si = i; sj = j;
                    break;
                }
                
                for(int k=0;k<4;k++){
                    int nx = i+dx[k];
                    int ny = j+dy[k];
                    int tm = c[i][j]+1;
                    if((0<=nx)&&(nx<w)&&(0<=ny)&&(ny<h)&&(a[nx][ny]!='X')&&(c[nx][ny]>tm)){
                        xque.push(nx);
                        yque.push(ny);
                        c[nx][ny] = tm;
                    }		
                }
                
            }
        }
		
		printf("%d\n", ans);
	
	
	
	
	return 0;
}