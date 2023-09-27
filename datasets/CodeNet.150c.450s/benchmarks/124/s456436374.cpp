#include <iostream>
using namespace std;
#define MAX 100
#define INFTY (1<<30)
#define rep(i,n) for(int i=0;i<n;i++)
enum{
	white,
	gray,
	black,
};

int n,m[MAX][MAX];

 void dijkstra(){
 	int minv;
 	int d[MAX],color[MAX];
 	rep(i,n){
 		d[i]=INFTY;
 		color[i]=white;
 	}
	d[0]=0;
 	color[0]=gray;
 	while(1){
 		minv=INFTY;
 		int u=-1;
 		rep(i,n){
 			if(minv>d[i]&&color[i]!=black){
 				u=i;
 				minv=d[i];
 			}
 		}
 		if(u==-1)	break;
 		color[u]=black;
 		rep(v,n){
 			if(color[v]!=black&&m[u][v]!=INFTY){
 				if(d[v]>d[u]+m[u][v]){
 					d[v]=d[u]+m[u][v];
 					color[v]=gray;
 				}
 			}
 		}
 	}
 	rep(i,n){
 		cout<<i<<" ";
 		if(d[i]==INFTY)	cout<<-1<<endl;
 		else	cout<<d[i]<<endl;
 	}
 }

 int main(){
 	cin>>n;
 	rep(i,n){
 		rep(j,n)		m[i][j]=INFTY;
 	}
 	int k,c,u,v;
 	rep(i,n){
 		cin>>u>>k;
 		rep(j,k){
 			cin>>v>>c;
 			m[u][v]=c;
 		}
 	}
 	dijkstra();
 	return 0;
 }