#include<bits/stdc++.h>
using namespace std;

int n,m[100][100];

int prim();

int main(){
  cin>>n;
  
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cin>>m[i][j];
      if(m[i][j]==-1)m[i][j]=200002;
    }
  }

  cout<<prim()<<endl;

}

int prim(){
  int u,mn;
  int d[100],p[100],ck[100];
  
  for(int i=0;i<n;i++){
    d[i]=200002;
    p[i]=-1;
    ck[i]=0;
  }

  d[0]=0;

  while(1){
    mn=200002;
    u=-1;
    for(int i=0;i<n;i++){
      if(mn>d[i] && ck[i]!=2){
	u=i;
	mn=d[i];
      }
    }
    if(u==-1)break;
    ck[u]=2;
    for(int i=0;i<n;i++){
      if(ck[i]!=2 && m[u][i]!=200002){
	if(d[i]>m[u][i]){
	  d[i]=m[u][i];
	  p[i]=u;
	  ck[i]=1;
	}
      }
    }
  }
  int sum=0;
  for(int i=0;i<n;i++){
    if(p[i]!=-1)sum+=m[i][p[i]];
  }
  return(sum);
}