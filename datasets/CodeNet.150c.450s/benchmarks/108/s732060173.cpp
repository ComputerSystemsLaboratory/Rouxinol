//＃いんｃぅで＜ｓｔぢお。ｈ＞
#include<stdio.h>
#include<iostream>
using namespace std;
int n=0,u=0;
int k[101],v[101][101],d[101];
int lptr=0,fptr=0;//lptr==enqueue,fptr==dequeue...
int t1[10000];
int s1[10000];
int c=0;//current
int nx=sizeof(t1)/sizeof(t1[0]);
void Enqueue(int s,int t){
	t1[lptr]=t;
	s1[lptr]=s;
	lptr=(lptr+1)%nx;
}
void bfs(int l){
	while(fptr!=lptr){
		l=t1[fptr];
		c=s1[fptr];
		fptr=(fptr+1)%nx;
		if(d[l]!=-1){
			continue;
		}
		for(int i=0;i<k[l];i++){
			if(v[l][i]){
				Enqueue(c+1,v[l][i]);
			}
		}
		d[l]=++c;
	}
}
int main(void){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>u;
		cin>>k[u];
		for(int j=0;j<k[u];j++){
			cin>>v[u][j];
		}
	}
	Enqueue(-1,1);
	for(int i=0;i<n+1;i++){
		d[i]=-1;
	}
	bfs(0);
	
	for(int i=1;i<n+1;i++){
		cout<<i<<" "<<d[i]<<endl;
	}
	
	return 0;
}

