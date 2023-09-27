#include<iostream>
using namespace std;

int main(){

  int N,n,p,c,t;
  int a[51],b[51];
  while(1){
  cin>>N>>n;
  if(N+n==0) break;
  for(int i=1;i<=N;i++){
    a[i]=N+1-i;
    b[i]=N+1-i;
  }

  for(int i=1;i<=n;i++){
    cin>>p>>c;
    t=1;
    for(int j=p;j<p+c;j++){
      b[t]=a[j];
      t++;
    }
      for(int s=1;s<p;s++){
	b[t]=a[s];
	t++;
      }
      for(int w=1;w<=N;w++){
	a[w]=b[w];
      }  
  }

  cout<<b[1]<<endl;
  }
  return 0;
}
  