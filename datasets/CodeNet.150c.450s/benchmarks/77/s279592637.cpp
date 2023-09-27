#include<iostream>
using namespace std;

int dx[]={1,0,-1,0};
int dy[]={0,1,0,-1};
int dir[256];
int main(){
	int n;
	dir['E']=0;
	dir['N']=1;
	dir['W']=2;
	dir['S']=3;
	while(cin>>n&&n){
		int num=0;
		bool gem[21][21]={false},got[21][21]={false};
		int x=10,y=10;
		int m;
		for(int i=0;i<n;i++){
			int x,y;
			cin>>x>>y;
			gem[x][y]=true;
		}
		cin>>m;
		for(int i=0;i<m;i++){
			char d;
			int l;
			cin>>d>>l;
			for(int j=0;j<l;j++){
				x+=dx[dir[d]];
				y+=dy[dir[d]];
				if(gem[x][y] && !got[x][y]){
					got[x][y]=true;
					num++;
				}
			}
		}
		cout<<(num==n?"Yes":"No")<<endl;
	}
	return 0;
}