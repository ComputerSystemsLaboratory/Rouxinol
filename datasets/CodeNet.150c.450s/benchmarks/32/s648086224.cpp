#include<bits/stdc++.h>
using namespace std;
int main(){
  int m,mn,mx;
  int gap;
  int pass;
  while(1){
    gap=0;
    pass=0;
    cin>>m>>mn>>mx;
    if(m==0 && mn==0 & mx==0) break;
    int score[m];
    for(int i=0;i<m;i++){
      cin>>score[i];
    }
    for(int i=mn;i<=mx;i++){
      if(gap<=score[i-1]-score[i]){
	gap=score[i-1]-score[i];
	pass=i;
      }
      /* cout<<pass<<" "<<gap<<endl;*/
    }
    cout<<pass<<endl;
  }
  return 0;
}
  
