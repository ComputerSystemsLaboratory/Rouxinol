#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,m;
  int cardt[100],cardh[100];
  int t_sum,h_sum;
  int st,sh;
  int mins;
  while(cin>>n>>m,n|m){
    t_sum=h_sum=0;
    mins=201;
    for(int i=0;i<n;i++){
      cin>>cardt[i];
      t_sum+=cardt[i];
    }
    for(int i=0;i<m;i++){
      cin>>cardh[i];
      h_sum+=cardh[i];
    }
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
	if(t_sum-cardt[i]+cardh[j]==h_sum-cardh[j]+cardt[i]){
	  if(cardt[i]+cardh[j]<mins){
	    mins=cardt[i]+cardh[j];
	    st=cardt[i];
	    sh=cardh[j];	 
	  }
	}
      }
    }
    if(mins==201)cout<<"-1"<<endl;
    else cout<<st<<" "<<sh<<endl;
  }
}
	