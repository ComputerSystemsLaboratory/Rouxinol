#include<iostream>

using namespace std;

int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};
int d(char c){
	switch(c){
	case 'N':return 0;
	case 'E':return 1;
	case 'S':return 2;
	case 'W':return 3;
	}
	return -1;
}

int main(){
	int n;
	while(cin>>n &&n){
		int ma[21][21];
		fill((int*)ma,(int*)ma+21*21,0);
		for(int i=0;i<n;i++){
			int x,y;
			cin>>x>>y;
			ma[y][x]=1;
		}
		int m;
		int ans=0;
		cin>>m;
		int nx=10;
		int ny=10;
		for(int i=0;i<m;i++){
			char c;
			int v;
			cin>>c>>v;
			while(v>0){
				v--;

				nx+=dx[d(c)];
				ny+=dy[d(c)];
				if(ma[ny][nx]==1){
					ma[ny][nx]=0;
					ans++;
				}
			}
			
		}
		if(ans==n)cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
}