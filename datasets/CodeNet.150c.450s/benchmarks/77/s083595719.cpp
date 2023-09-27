#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
	int n;
	while(cin>>n){
		if(n==0) 
			break;
		int da[22][22]={};
		int x,y;
		for(int i=0;i<n;i++){
			cin>>x>>y; 
			da[y][x]=1;
		}
		int m;
		cin>>m;
		char v;
		int l;
		int nx=10,ny=10;
		for(int i=0;i<m;i++){
			cin>>v;
			cin>>l;
			if(v=='N'){
				for(int j=1;j<=l;j++)
					da[ny+j][nx]=0;
				ny+=l;
			}
			if(v=='E'){
				for(int j=1;j<=l;j++)
					da[ny][nx+j]=0;
				nx+=l;
			}
			if(v=='S'){
				for(int j=1;j<=l;j++)
					da[ny-j][nx]=0;
				ny-=l;
			}
			if(v=='W'){
				for(int j=1;j<=l;j++)
					da[ny][nx-j]=0;
				nx-=l;
			}
		}
		for(int i=0;i<22;i++){
			for(int j=0;j<22;j++){
				if(da[i][j]==1){
					cout<<"No"<<endl;
					j=30; 
					i=30;
					break;
				}
			}
			if(i==21)
				cout<<"Yes"<<endl;
		}
	}
	return 0;
}