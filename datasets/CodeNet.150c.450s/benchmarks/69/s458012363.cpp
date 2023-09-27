//Ball
#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  while(n--){
    int l=0, r=0, tmp;
    bool flag=true;
    for(int i=0; i<10; i++){
      cin>>tmp;
      if(l>=r && l<tmp){l=tmp; continue;}
      if(l>=r && r<tmp){r=tmp; continue;}
      if(r>l  && r<tmp){r=tmp; continue;}
      if(r>l  && l<tmp){l=tmp; continue;}
      flag=false;
    }
    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
  }
  return 0;
}