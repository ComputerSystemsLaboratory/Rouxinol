#include<bits/stdc++.h>
using namespace std;
int main(){
	int map[21][21],n,a,b,c,d,x,y,n2;
	char h;
	while(cin>>n){
		if(n==0)break;
		for(int i=0;i<21;i++)for(int j=0;j<21;j++)map[i][j]=0;
		for(int i=0;i<n;i++){cin>>a>>b;map[b][a]++;}
		cin>>n2;c=0;x=y=10;
		for(int i=0;i<n2;i++){
			cin>>h;
			cin>>d;
			if(h=='N')for(int j=0;j<d;j++){y++;if(map[y][x]!=0){map[y][x]=0;c++;}}
			else if(h=='S')for(int j=0;j<d;j++){y--;if(map[y][x]==1){map[y][x]=0;c++;}}
			else if(h=='E')for(int j=0;j<d;j++){x++;if(map[y][x]==1){map[y][x]=0;c++;}}
			else if(h=='W')for(int j=0;j<d;j++){x--;if(map[y][x]==1){map[y][x]=0;c++;}}
		}
		if(c==n)cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
	return 0;
}