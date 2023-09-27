#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#include<cstdio>
#include<string>
#include<cmath>
typedef long long int ll;
#define VI vector<int>

#define rep(i,a) for(int i=0;i<(a);i++)

int map[21][21]={};
int X,Y;

using namespace std;
void check(char d,int l){
	if(d=='N'){
		for(int i=0;i<=l;i++)
			map[Y+i][X]=1;
		Y+=l;
	}
	if(d=='W'){
		for(int i=0;i<=l;i++)
			map[Y][X-i]=1;
		X-=l;
	}
	if(d=='S'){
		for(int i=0;i<=l;i++)
			map[Y-i][X]=1;
		Y-=l;
	}
	if(d=='E'){
		for(int i=0;i<=l;i++)
			map[Y][X+i]=1;
		X+=l;
	}
}

int main(){
	while(1){
		rep(i,21)rep(j,21)map[i][j]=0;
		X=Y=10;
		int m,n;
		cin>>n;
		if(n==0)break;
		rep(i,n){
			int x,y;
			cin>>x>>y;
			map[y][x]=3;
		}

		cin>>m;
		rep(i,m){
			char d;
			int l;
			cin>>d>>l;
			check(d,l);
		}
		int least=0;
		rep(i,21){
			rep(j,21){
				if(map[i][j]==3){
					least++;

				}
			}
		}
		if(least==0)cout<<"Yes"<<endl;
		else		cout<<"No"<<endl;
	}	
	return 0;
}