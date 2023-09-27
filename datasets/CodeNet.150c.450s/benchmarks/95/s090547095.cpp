#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,ans;
  string s;
  bool l,r,c;
  while(1){
    cin>>n;
    if(n==0) break;
    l=r=false;
    c=true;
    ans=0;
    for(int i=0;i<n;i++){
      cin>>s;
      if(s=="lu") l=true;
      else if(s=="ld") l=false;
      else if(s=="ru") r=true;
      else if(s=="rd") r=false;

      if(l && r && c){
	c=false;
	ans++;
      }
      if(!l && !r && !c){
	c=true;
	ans++;
      }
    }
    cout<<ans<<endl;
  }
  return 0;
}
