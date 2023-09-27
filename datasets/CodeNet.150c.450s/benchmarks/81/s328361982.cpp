#include<vector>
#include<list>
#include<algorithm>
#include<iostream>
#include<string>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
using namespace std;
void f(int a[][10],int b[],int c,int e,int n,int t){
  int i;
  if(c==e){
    if(b[c]==-1||b[c]>t)
      b[c]=t;
  }else if(b[c]==-1||b[c]>t){
    b[c]=t;
    for(i=0;i<n;i++){
      if(a[c][i]!=-1)
	f(a,b,i,e,n,t+a[c][i]);
    }
  }
  return;
}    
int main(){
  int i,j;
  int z[10][10],a[10][10],b[10],bmn,tmn,sum,n,m;
  for(;;){
    cin>>n;
    if(n==0)
      break;
    memset(a,-1,sizeof(a));
    m=0;
    for(i=0;i<n;i++){
      int p,q,r;
      cin>>p>>q>>r;
      a[p][q]=r;
      a[q][p]=r;
      m=max(max(m,p),q);
    }
    m++;
    for(i=0;i<m-1;i++){
      for(j=i+1;j<m;j++){
	memset(b,-1,sizeof(b));
	f(a,b,i,j,m,0);
	z[i][j]=b[j];
	z[j][i]=b[j];
      }
    }
    tmn=-1;
    for(i=0;i<m;i++){
      sum=0;
      for(j=0;j<m;j++){
	if(i!=j)
	  sum+=z[i][j];
      }
      if(tmn==-1||tmn>sum){
	tmn=sum;
	bmn=i;
      }
    }
    cout<<bmn<<" "<<tmn<<endl;
  }
  return 0;
}