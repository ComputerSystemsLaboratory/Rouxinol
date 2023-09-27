#include<iostream>
using namespace std;

int main(){
  int a,b,n,r,c;
  while(1){
    cin>>a>>b;
    if(a==0)break;
    int route[b+1][a+1];

    for(int i=0;i<b+1;i++)
      for(int j=0;j<a+1;j++)
	route[i][j]=0;
    cin>>n;
    while(n--){
      cin>>r>>c;
      route[c][r]=-1;
    }

    route[1][1]=1;

    for(int i=1;i<b+1;i++)
      for(int j=1;j<a+1;j++)
	if(route[i][j]!=-1){
	  if(route[i-1][j]!=-1)route[i][j]+=route[i-1][j];
	  if(route[i][j-1]!=-1)route[i][j]+=route[i][j-1];
	}

    cout<<route[b][a]<<endl;
  }
}