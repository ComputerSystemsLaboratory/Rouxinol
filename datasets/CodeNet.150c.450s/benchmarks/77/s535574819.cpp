#include<iostream>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,a) loop(i,0,a)
using namespace std;

int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};

int main(){
	int n;
	while(cin>>n,n){
		int x[n],y[n];
		bool check[n];
		rep(i,n){
			cin>>x[i]>>y[i];
			check[i]=((x[i]==10 && y[i]==10)?true:false);
		}
		int m,dir,l,nowx=10,nowy=10;
		char d;
		cin>>m;
		rep(i,m){
			cin>>d>>l;
			if(d=='N')dir=1;
			if(d=='W')dir=2;
			if(d=='S')dir=3;
			if(d=='E')dir=0;
			rep(k,l){
				nowx+=dx[dir];
				nowy+=dy[dir];
				rep(j,n)if(nowx==x[j] && nowy==y[j])check[j]=true;
			}
		}
		bool ans=true;
		rep(i,n)if(!check[i])ans=false;
		cout<<((ans)?"Yes":"No")<<endl;
	}
	return 0;
}