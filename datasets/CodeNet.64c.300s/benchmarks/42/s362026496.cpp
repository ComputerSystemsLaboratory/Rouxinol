#include<iostream>
#define Rep(i,a,b) for(int i=a;i<b;i++)
#define rep(i,a) Rep(i,0,a)
using namespace std;
int main(){
	int tre[21][21],n,m,l,sum,x,y,re;
	int dx[]={0,1,0,-1},dy[]={1,0,-1,0};
	char c;
	while(cin>>n,n){
		sum=0;
		rep(i,21)
			rep(j,21)
				tre[i][j]=0;
		rep(i,n){
			cin>>x>>y;
			tre[y][x]=1;
		}
		cin>>m;
		x=10;
		y=10;
		rep(i,m){
			cin>>c>>l;
			if(c=='N')
			re=0;
			else if(c=='E')
			re=1;
			else if(c=='S')
			re=2;
			else if(c=='W')
			re=3;
			rep(j,l){
				x+=dx[re];
				y+=dy[re];
				if(tre[y][x]==1){
				tre[y][x]=0;
				sum++;
			}
			}
			
		}
		if(sum==n)
		cout<<"Yes"<<endl;
		else
		cout<<"No"<<endl;
	}
	return 0;
}