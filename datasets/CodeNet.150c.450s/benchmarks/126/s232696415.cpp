#include<stdio.h>
#include<iostream>
using namespace std;
#include<queue>
int main(){
while(1){
int a,b,n,v,x,y,i,j,m[18][18]={0},c=0,o=0;
pair<int,int> p,t,g;
queue<pair<int,int> > q;
scanf("%d%d",&a,&b);
if(a==0&&b==0){
break;
}
g.first=a;
g.second=b;
for(i=0;i<=a+1;i++){
	for(j=0;j<=b+1;j++){
		if(i==0||i==a+1||j==0||j==b+1){
		m[i][j]=1;
		}
	}
}
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d%d",&a,&b);
m[a][b]=1;
}
p.first=1;
p.second=1;
q.push(p);
while(!q.empty()){
	t=q.front();
	if(m[t.first+1][t.second]!=1){
		t.first++;
		q.push(t);
		t.first--;
	}
	if(m[t.first][t.second+1]!=1){
		t.second++;
		q.push(t);
		t.second--;
	}

	if(q.front()==g){
		c++;
	}
	q.pop();
}
printf("%d\n",c);

}
return 0;
}