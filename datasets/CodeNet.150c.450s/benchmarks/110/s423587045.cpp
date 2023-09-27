#include<stdio.h>
#include<iostream>
#include<queue>
using namespace std;
struct k{
	int x,y,c;
};
queue<k> q;
int p[1002][1002],m[1002][1002];
int main(void) {
	k z,z1;
	char d;
	int v=1,h,w,n,i,j,dx[4]={1,0,-1,0},dy[4]={0,1,0,-1};
	cin >> h >> w>>n;
	for (i = 0; i != w + 2; i++) {
		for (j = 0; j != h + 2; j++){
			p[j][i] = 99;
			m[j][i]=0;
		}
	}for (i = 1; i != w + 1; i++) {
		for (j = 1; j != h + 1; j++){
			m[j][i]=99;
		}
	}
	for (i = 1; i <= h; i++) {
		for (j = 1; j <= w; j++){
			cin >> d;
			switch(d){
				case 'S':
					z.x=j;
					z.y=i;
					z.c=0;
					p[i][j]=-1;
					break;
				case '.':
					p[i][j]=-1;
					break;
				case 'X':
					p[i][j]=99;
					break;
				case '1':
					p[i][j]=1;
					break;
				case '2':
					p[i][j]=2;
					break;
				case '3':
					p[i][j]=3;
					break;
				case '4':
					p[i][j]=4;
					break;
				case '5':
					p[i][j]=5;
					break;
				case '6':
					p[i][j]=6;
					break;
				case '7':
					p[i][j]=7;
					break;
				case '8':
					p[i][j]=8;
					break;
				case '9':
					p[i][j]=9;
					break;
			}
		}
	}
	q.push(z);
	while(!q.empty()){
			z=q.front();
			q.pop();
			if(m[z.y][z.x]==v)
				continue;
			if(p[z.y][z.x]==v){
				if(p[z.y][z.x]==n)
					break;
				while(!q.empty())
					q.pop();
				q.push(z);
				v++;
				//printf("%d %d %d\n",z.x,z.y,z.c);
			}
		//	cout<<p[z.y][z.x]<<" "<<z.y<<" "<<z.x<<endl;
			m[z.y][z.x]=v;
			for(i=0;i!=4;i++){
				if(p[z.y+dy[i]][z.x+dx[i]]!=99/*&&z.x+dx[i]!=v&&z.y+dy[i]!=v*/){
					z1.x=z.x+dx[i];
					z1.y=z.y+dy[i];
					z1.c=z.c+1;
					q.push(z1);
				}
			}
	}
	cout <<z.c<< endl;
}