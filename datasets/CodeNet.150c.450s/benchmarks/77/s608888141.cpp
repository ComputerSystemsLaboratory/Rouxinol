#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	while(cin>>n,n){
		bool dia[41][41]={};
		for(int i=0,x,y;i<n;i++){
			cin>>x>>y;
			dia[y][x]=1;
		}
		int mo;
		cin>>mo;
		string di="NESW";
		int dx[4]={0,1,0,-1},dy[4]={1,0,-1,0};
		for(int i=0,num,x=10,y=10;i<mo;i++){
			char direction;
			cin>>direction>>num;
			for(int j=0;j<4;j++){
				if(direction==di[j]){
					for(int k=0;k<num;k++){
						x+=dx[j];
						y+=dy[j];
						if(dia[y][x]==true){
							dia[y][x]=false;
							n--;
						}
					}
					break;
				}
			}
		}
		if(n==0)cout<<"Yes\n";
		else cout<<"No\n";
	}
}