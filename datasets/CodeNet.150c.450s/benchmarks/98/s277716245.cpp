#include<iostream>
using namespace std;

int main(){
  while(1){
  int n,m;
  int sumt=0,sumh=0;
  int t[101],h[101];
  cin>>n>>m;
  if(n+m==0) break;
  for(int i=0;i<n;i++){
    cin>>t[i];
    sumt+=t[i];
  }
  int  stt=sumt;
  
  for(int i=0;i<m;i++){
    cin>>h[i];
    sumh+=h[i];
  }
  int sth=sumh;
  int g;
  int anst=0,ansh=0;
  int f=0,min=10000;
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      sumt-=t[i];
      sumh-=h[j];
      sumt+=h[j];
      sumh+=t[i];
      
      if(sumt==sumh){
	f=1;
	if(t[i]+h[j]<min){
	  min=t[i]+h[i];
	  anst=t[i];
	    ansh=h[j];
      }
      }
      else if(sumt!=sumh){
	sumt=stt;
	sumh=sth;
      }

    }
  }
 
  if(f==1) cout<<anst<<" "<<ansh<<endl;
  else cout<<"-1"<<endl;
  }
  return 0;
}