#include<iostream>
using namespace std;
static const int MAX=100;
static const int INFTY=(1<<21);
static const int white=0;
static const int gray=1;
static const int black=2;

int n,M[MAX][MAX];
void dijkstra(){
    int minv;
    int d[MAX],color[MAX];

    for(int i=0;i<n;i++){
	d[i]=INFTY;
	color[i]=white;
    }
    d[0]=0;
    color[0]=gray;
    while(1){
	minv=INFTY;
	int u=-1;
	for(int i=0;i<n;i++){
	    if(minv>d[i]&&color[i]!=black){
		u=i;
		minv=d[i];
	    }
	}
	if(u==-1)break;

	color[u]=black;
	for(int v=0;v<n;v++){
	    if(color[v]!=black&&M[u][v]!=INFTY){
		if(d[v]>d[u]+M[u][v]){
		    d[v]=d[u]+M[u][v];
		    color[v]=gray;
		}
	    }
	}
    }
    for(int i=0;i<n;i++){
	cout<<i<<" "<<(d[i]==INFTY?-1:d[i])<<endl;
    }
}
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
	for(int j=0;j<n;j++){
	    M[i][j]=INFTY;
	}
    }

    int k,c,u,v;
    for(int i=0;i<n;i++){
	cin>>u>>k;
	for(int j=0;j<k;j++){
	    cin>>v>>c;
	    M[u][v]=c;
	}
    }
    dijkstra();
    return 0;
}
