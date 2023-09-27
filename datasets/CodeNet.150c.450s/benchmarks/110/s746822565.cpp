#include<stdio.h>
#include<iostream>
#include<queue>
using namespace std;
int m[1002][1002]={0},p[1002][1002]={0};
struct r{
	int g,g2;
	unsigned long long l;
};
int main(){
	int h,w,n,i,j,a,b[2],l2=1;
	b[0]=1;
	b[1]=-1;
	char c[2001];
	r gl;
	queue<r> q;
	cin>>h>>w>>n;
	for(i=0;i<=h+1;i++){
		m[i][0]=-1;
		m[i][w+1]=-1;
	}
	for(i=0;i<=w+1;i++){
		m[0][i]=-1;
		m[h+1][i]=-1;
	}
	for(i=1;i<=h;i++){
		scanf("%s",c);
		for(j=1;j<=w;j++){
			a=c[j-1];
			if(a>=49&&a<=57){m[i][j]=a-48;}
			if(c[j-1]=='X'){m[i][j]=-1;}
			if(c[j-1]=='S'){
				gl.g=i;
				gl.g2=j;
				gl.l=0;
				q.push(gl);
			}
		}
	}
	while(1){
		gl=q.front();
		q.pop();
		if(m[gl.g][gl.g2]==l2){
			l2++;
			if(l2==n+1){break;}
			while(!q.empty()){q.pop();}
		}
		gl.l++;
		p[gl.g][gl.g2]=l2;
		for(i=0;i<2;i++){
			if(m[gl.g+b[i]][gl.g2]!=-1&&p[gl.g+b[i]][gl.g2]!=l2){
				p[gl.g+b[i]][gl.g2]=l2;
				gl.g+=b[i];
				q.push(gl);
				gl.g-=b[i];
			}
			if(m[gl.g][gl.g2+b[i]]!=-1&&p[gl.g][gl.g2+b[i]]!=l2){
				p[gl.g][gl.g2+b[i]]=l2;
				gl.g2+=b[i];
				q.push(gl);
				gl.g2-=b[i];
			}
		}

	}
	cout<<gl.l<<endl;
	return 0;
}