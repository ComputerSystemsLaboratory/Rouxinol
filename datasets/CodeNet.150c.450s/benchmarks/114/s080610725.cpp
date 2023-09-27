#include <iostream>
using namespace std;
#define MAX 100
#define INFINITY (1<<30)
enum{
	white=0,
	gray=1,
	black=2,
};

int n,m[MAX][MAX];

int prim(){
	int u,minv;
	int d[MAX],p[MAX],color[MAX];
	for(int i=0;i<n;i++){
		d[i]=INFINITY;
		p[i]=-1;
		color[i]=white;
	}
	d[0]=0;
	while(1){
		minv=INFINITY;
		u=-1;
		for(int i=0;i<n;i++){
			if(minv>d[i]&&color[i]!=black){
				u=i;
				minv=d[i];
			}
		}
		if(u==-1)	break;
		color[u]=black;
		for(int v=0;v<n;v++){
			if(color[v]!=black&&m[u][v]!=INFINITY){
				if(d[v]>m[u][v]){
					d[v]=m[u][v];
					p[v]=u;
					color[v]=gray;
				}
			}
		}
	}
	int sum=0;
	for(int i=0;i<n;i++){
		if(p[i]!=-1)	sum+=m[i][p[i]];
	}
	return sum;
}

int main(){
	cin>>n;
	int e;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>e;
			if(e==-1)	m[i][j]=INFINITY;
			else	m[i][j]=e;
		}
	}
	cout<<prim()<<endl;
	return 0;
}