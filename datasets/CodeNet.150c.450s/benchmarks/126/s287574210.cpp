#include<iostream>
#include<queue>
using namespace std;
#include<stdio.h>
int main(void){
while(1){
pair<int,int> s,t,g;
queue<pair<int,int> > u;
int i,j,k,m[18][18]={0},x,y,n,b=0;
scanf("%d%d",&x,&y);
if(x==0&&y==0){
break;
}
g.first=x;
g.second=y;
s.first=1;
s.second=1;
for(i=0;i<=x+1;i++){
	for(j=0;j<=y+1;j++){
		if(j==0||j==y+1){
			m[i][j]=1;
		}
		else if(i==0||i==x+1){
			m[i][j]=1;
		}
	}
}
scanf("%d",&n);
for(k=0;k<n;k++){
	scanf("%d%d",&x,&y);
	m[x][y]=1;
}
u.push(s);
while(!u.empty()){
	t=u.front();
	if(m[t.first+1][t.second]!=1){
		t.first++;
		u.push(t);
		t.first--;
	}
	if(m[t.first][t.second+1]!=1){
		t.second++;
		u.push(t);
		t.second--;
	}
	if(u.front()==g){
		b++;
		u.pop();
	}
	else{
		u.pop();
	}
}
printf("%d\n",b);
}
return 0;
}