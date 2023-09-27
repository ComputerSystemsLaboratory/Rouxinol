#include<iostream>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,a) loop(i,0,a)
#define INF 100000
using namespace std;

struct place{
	int x,y;
};

int main(){
	int N;
	while(1){
		cin>>N;
		if(N==0)break;
		int n[N],p[N];
		loop(i,1,N)cin>>n[i]>>p[i];
		bool dt[401][401];
		rep(i,401)rep(j,401)dt[i][j]=false;
		dt[200][200]=true;
		place basyo[N];
		basyo[0].x=200;
		basyo[0].y=200;
		loop(i,1,N){
			int dirx,diry;
			if(p[i]==0){
				dirx=-1;
				diry=0;
			}else if(p[i]==1){
				dirx=0;
				diry=1;
			}else if(p[i]==2){
				dirx=1;
				diry=0;
			}else{
				dirx=0;
				diry=-1;
			}
			int nx=basyo[n[i]].x+dirx;
			int ny=basyo[n[i]].y+diry;
			dt[ny][nx]=true;
			basyo[i].x=nx;
			basyo[i].y=ny;
		}
		int minix,miniy,maxx,maxy;
		minix=miniy=maxx=maxy=INF;
		rep(i,401){
			rep(j,401){
				if(dt[i][j]){
					miniy=i;
					break;
				}
			}
			if(miniy!=INF)break;
		}
		rep(i,401){
			rep(j,401){
				if(dt[j][i]){
					minix=i;
					break;
				}
			}
			if(minix!=INF)break;
		}
		for(int i=400;i>=0;i--){
			for(int j=400;j>=0;j--){
				if(dt[i][j]){
					maxy=i;
					break;
				}
			}
			if(maxy!=INF)break;
		}
		for(int i=400;i>=0;i--){
			for(int j=400;j>=0;j--){
				if(dt[j][i]){
					maxx=i;
					break;
				}
			}
			if(maxx!=INF)break;
		}
		int ansx=maxx-minix+1;
		int ansy=maxy-miniy+1;
		cout<<ansx<<" "<<ansy<<endl;
	}
	return 0;
}