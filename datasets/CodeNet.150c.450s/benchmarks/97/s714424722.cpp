#include<iostream>
#include<map>
using namespace std;
bool table[500][500];
int main(){
	int ww;
	while(cin>>ww,ww){
		int nx=250,ny=250,n,d;
		map<int, pair<int,int> >dir;
	for(int i=0;i<500;i++)for(int j=0;j<500;j++)table[i][j]=0;
		pair<int,int>t(ny,nx);
		table[ny][nx]=1;
		dir[0]=t;
		for(int i=1;i<ww;i++){
			cin>>n>>d;
			ny=dir[n].first;
			nx=dir[n].second;
			if(d==0)nx--;
			else if(d==1)ny--;
			else if(d==2)nx++;
			else if(d==3)ny++;
			table[ny][nx]=1;
			pair<int,int>tmp(ny,nx);
			dir[i]=tmp;
			table[ny][nx]=1;
		}
	int tx=-1,ty=-1,ux=100000,uy=100000;
	for(int i=0;i<500;i++){
		for(int j=0;j<500;j++){
			if(table[i][j]==1){
				tx=max(tx,j);
				ty=max(ty,i);
				ux=min(ux,j);
				uy=min(uy,i);
			}
		}
	}
	
	cout<<tx-ux+1<<" "<<ty-uy+1<<endl;
}
	return 0;
}