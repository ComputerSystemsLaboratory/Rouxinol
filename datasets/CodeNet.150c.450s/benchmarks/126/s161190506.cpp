#include<stdio.h>
#include<queue>
#include<iostream>
using namespace std;
int main(void)
{
	for(;;){
		queue<pair<int,int> > q;
		pair<int,int> g,s,w;
		int x,y,f[18][18],n,m,a=0;
		scanf("%d %d",&x,&y);
		if(x==0&&y==0){
			break;
		}
		s.first=1;
		s.second=1;
		q.push(s);
		g.first=x;
		g.second=y;
		for(n=0;n<18;n++){
			for(m=0;m<18;m++){
				if(n==0||n>x||m==0||m>y){
					f[n][m]=1;
				}
				else{
					f[n][m]=0;
				}
			}
		}

		scanf("%d",&n);
		for(m=0;m<n;m++){
			scanf("%d %d",&x,&y);
			f[x][y]=1;
		}

		while(!q.empty()){
			s=q.front();
			if(f[s.first+1][s.second]==0){
				w.first=s.first+1;
				w.second=s.second;
				if(w==g){
					a++;
				}
				else{
					q.push(w);
				}
			}
			if(f[s.first][s.second+1]==0){
				w.first=s.first;
				w.second=s.second+1;
				if(w==g){
					a++;
				}
				else{
					q.push(w);
				}
			}
			f[s.first][s.second]=1;
			q.pop();
		}
		printf("%d\n",a);
	}
	return 0;
}