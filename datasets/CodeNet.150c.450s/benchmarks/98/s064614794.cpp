#include<iostream>
#define INF (1e9)
using namespace std;

int main(){
  int n,m,t[100],h[100],ts,hs,a,mint,minh;
  while(1){
    cin>>n>>m;
    if(n==0 && m==0)break;
    for(int i=0;i<n;i++)
      cin>>t[i];

    for(int i=0;i<m;i++)
      cin>>h[i];
    a=0;
    mint=minh=INF;
    for(int i=0;i<n;i++)
      for(int j=0;j<m;j++){
	swap(t[i],h[j]);
	ts=0;
	hs=0;
	for(int k=0;k<n;k++)
	  ts+=t[k];
	for(int l=0;l<m;l++)
	  hs+=h[l];

	if(ts==hs && mint+minh>h[j]+t[i]){
	  mint=h[j];
	  minh=t[i];
	  if(a==0)a=1;
	}
	swap(t[i],h[j]);
      }

    if(a==0)
      cout<<"-1"<<endl;
    else
      cout<<mint<<' '<<minh<<endl;
  }
  return 0;
}