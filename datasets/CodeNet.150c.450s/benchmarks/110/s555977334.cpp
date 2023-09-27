#include <iostream>
#include <queue>

using namespace std;

struct pos{
		int x,y;
	pos(int _x,int _y){x=_x;y=_y;}
};

int a[1000][1000],m[1000][1000],sh,sw;

int  ans(int p,int q,int h,int w,int count);

void map(int H,int W){
	for(int i=0;i<H;i++){
		for(int j=0;j<W;j++){
			cout << m[i][j] << " ";
		}
		cout<<"\n";
	}
	cout<<"\n";
}

int main(){
	int H,W,count,d,T;
	char b;
	cin>>H;
	cin>>W;
	cin>>d;
	for(int i=0;i<H;i++){
		for(int j=0;j<W;j++){
			cin>>b;
			if('1'<=b&&b<='9'){
				a[i][j]=b-48;
			}else if(b=='X'){
				a[i][j]=-1;
			}else if(b=='S'){
				sh=i;
				sw=j;
				a[i][j]=0;
			}else if(b=='.'){
				a[i][j]=0;
			}
		}
	}
	for(T=0,count=0;count<d;count++){
		//map(H,W);
		T+=ans(sh,sw,H,W,count);
	}
	//map(H,W);
	cout<<T<<endl;
	return 0;
}

int ans(int p,int q,int h,int w,int count){
	int gx,gy;
	//cout<<sh<<" "<<sw<<"\n";
	int dy[4]={-1,0,0,1},dx[4]={0,-1,1,0};
	for(int i=0;i<h;i++){
		for(int j=0;j<w;j++){
			m[i][j]=-1;
			if(a[i][j]==count+1){
				gx=i;
				gy=j;
			}
		}
	}
	sh=gx;
	sw=gy;
	m[p][q]=0;
	queue<pos> Q;
	Q.push(pos(p,q));
	while(Q.size()){
		//cout<<Q.size()<<" \n";
		pos b=Q.front();
		Q.pop();
		for(int i=0;i<=3;i++){
			if(0<=b.x+dx[i]&&b.x+dx[i]<h&&0<=b.y+dy[i]&&b.y+dy[i]<w&&m[b.x+dx[i]][b.y+dy[i]]==-1){
				if(a[b.x+dx[i]][b.y+dy[i]]!=-1){
					Q.push(pos(b.x+dx[i],b.y+dy[i]));
					m[b.x+dx[i]][b.y+dy[i]]=m[b.x][b.y]+1;
				}
			}
		}
	}
	return m[gx][gy];
}