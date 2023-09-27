#include <cstdio>

using namespace std;

int main(){
	int w,h,n;
	int d[17][17];
	bool f[17][17];
	int a,b;
	while(1){
		scanf("%d %d %d",&w,&h,&n);
		if(w == 0 && h == 0){
			break;
		}
		for(int i=0;i<=16;i++){
			for(int j=0;j<=16;j++){
				d[i][j] = 0;
				f[i][j] = true;
			}
		}
		for(int i=0;i<n;i++){
			scanf("%d %d",&a,&b);
			f[a][b] = false;
		}
		d[0][1] = 1;
		
		for(int y=1;y<=h;y++){
			for(int x=1;x<=w;x++){
				if(f[x][y]){
					d[x][y] = d[x-1][y] + d[x][y-1];
				}
			}
		}
		/*
		for(int y=h;y>0;y--){
			for(int x=1;x<=w;x++){
				if(f[x][y]){
					printf("%2d ",d[x][y]);
				}else{
					printf("-- ");
				}
			}
			printf("\n");
		}
		*/
		printf("%d\n",d[w][h]);
	}
}