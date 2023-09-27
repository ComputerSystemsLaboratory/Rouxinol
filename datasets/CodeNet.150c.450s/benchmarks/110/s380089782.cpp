#include<cstdio>
#include<iostream>
#include<cstring>
#include<queue>
using namespace std;
struct mouse{
	int x;
	int y;
	int cnt;
};
int used[1000][1000]={0};
char map[1000][1000];
int maps[1000][1000]={0};
int main(){
	int h,w,n,p=1,i,j,fx,fy,k;
	int mx[4]={-1,0,1,0};
	int my[4]={0,-1,0,1};
	char num[11]="0123456789";
	queue<mouse> m;
	mouse v,u;
	scanf("%d %d %d",&h,&w,&n);
	for(i=0;i<h;i++){
		for(j=0;j<w;j++){
			cin>>map[i][j];
			if(map[i][j]=='S'){
				v.x=j;
				v.y=i;
			}
			for(k=0;k<10;k++){
				if(num[k]==map[i][j]){
					maps[i][j]=k;
				}
			}
		}
	}
	v.cnt=0;
	m.push(v);
	while(1){
		v=m.front();
		m.pop();
		if(used[v.y][v.x]==1){
			continue;
		}
		
		else{
			used[v.y][v.x]=1;
		}
		if(maps[v.y][v.x]==p){
			if(p==n){
				break;
			}
			memset(used,0,sizeof(used));
			while(!m.empty()){
				m.pop();
			}
			p++;
			m.push(v);
			continue;
		}
		for(i=0;i<4;i++){
			if((v.x+mx[i])>=0&&(v.x+mx[i])<w&&(v.y+my[i])>=0&&(v.y+my[i])<h){
				u=v;
				u.x=v.x+mx[i];
				u.y=v.y+my[i];
				if(map[u.y][u.x]!='X'){
					u.cnt++;
					m.push(u);
				}
			}
		}
	}
	printf("%d\n",v.cnt);
	return 0;
}