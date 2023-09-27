#include<bits/stdc++.h>
using namespace std;
int main(){
  int m,ni,na,i,j,k,ans,idx;
  while(cin>>m>>ni>>na,m||ni||na){
    int p[m];
    for(i=0;i<m;i++) cin>>p[i];
    sort(p,p+m);
    ans=0;
    idx=ni;
    for(i=ni;i<=na;i++){
      //cout<<p[m-i]-p[m-i-1]<<endl;
      if(p[m-i]-p[m-i-1]>=ans){
	ans=p[m-i]-p[m-i-1];
	idx=i;
      }
    }
    cout << idx << endl;
  }
  return 0;
}