#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,p;
  int per[50];
  int wan;
  int idx;
  while(cin>>n>>p,n|p){
    memset(per,0,sizeof(per));
    wan=p;
    idx=0;
    while(1){
      if(idx==n)idx=0;
      if(wan){
	wan--;
	per[idx]++;
	if(per[idx]==p)break;
      }
      else{
	wan=per[idx];
	per[idx]=0;
      }
      idx++;
    }
    cout<<idx<<endl;
  }
}