#include <iostream>
using namespace std;
int prim();
static const int maxs=100;
static const int infty=(1<<21);
static const int white=0;
static const int gray=1;
static const int black=2;

int n,m[maxs][maxs];

int main(){
  cin>>n;
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      int e; cin>>e;
      m[i][j]=(e==-1)?infty:e;
    }
  }
  cout<<prim()<<endl;
  return 0;
}

int prim(){
  int u,minv;
  int d[maxs],p[maxs],color[maxs];
  for(int i=0;i<n;i++){
    d[i]=infty;
    p[i]=-1;
    color[i]=white;
  }
  d[0]=0;
  while(1){
    minv=infty;
    u=-1;
    for(int i=0;i<n;i++){
      if(minv>d[i]&&color[i]!=black){
	u=i;
	minv=d[i];
      }
    }
    if(u==-1)break;
    color[u]=black;
    for(int v=0;v<n;v++){
      if(color[v]!=black&&m[u][v]!=infty){
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
    if(p[i]!=-1)sum+=m[i][p[i]];
  }
  // cout<<p[0]<<" "<<p[1]<<" "<<p[2]<<" "<<p[3]<<" "<<p[4]<<" "<<endl;/////////
  return sum;
}