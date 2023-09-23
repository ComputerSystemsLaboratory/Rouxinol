#include<iostream>
#include<cstdio>
using namespace std;
int vx[4]={0,1,0,-1};
int vy[4]={1,0,-1,0};
bool map[30][30];
int get;
int N;
int M;
int x,y;

void init(){
	for(int i=0;i<30;i++){
		for(int j=0;j<30;j++){
			map[i][j]=0;
		}
	}
	N=M=get=0;
	y=x=10;
}

int vec(char c){
	if(c=='N'){
		return 0;
	}else if(c=='E'){
		return 1;
	}else if(c=='S'){
		return 2;
	}else{
		return 3;
	}
}

void solve(int v,int d){
	for(int i=0;i<d;i++){
		x+=vx[v];
		y+=vy[v];
		if(map[x][y]){
			map[x][y]=0;
			get++;
		}
	}
}



int main(){
	init();
	while(cin>>N,N!=0){
		//cout<<N<<endl;
		for(int i=0;i<N;i++){
			int a,b;
			cin>>a>>b;
			//cout<<a<<" "<<b<<" pos"<<endl;
			map[a][b]=1;
		}
		cin>>M;
		//cout<<M<<endl;
		//cout<<endl;
		for(int i=0;i<M;i++){
			char c;
			int d;
			scanf(" %c %d",&c,&d);
			//cout<<c<<endl;
			solve(vec(c),d);
		}
		
		if(get==N){
			cout<<"Yes"<<endl;
		}else{
			cout<<"No"<<endl;
		}
		init();
	}
}