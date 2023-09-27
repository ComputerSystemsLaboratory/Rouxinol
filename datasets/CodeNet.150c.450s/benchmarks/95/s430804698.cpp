#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  while(cin>>n,n){
    int c=0,a=0;
    for(int i=0;i<n;++i){
      string s; cin>>s;
      if(s=="lu" || s=="ru"){
        if(c==1) a++, c=0;
        else c=1;
      }else if(s=="ld" || s=="rd"){
        if(c==-1) a++, c=0;
        else c=-1;
      }
    }
    cout<<a<<endl;
  }
  return 0;
}