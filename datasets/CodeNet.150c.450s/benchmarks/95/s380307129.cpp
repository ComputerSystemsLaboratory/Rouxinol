#include <bits/stdc++.h>
using namespace std;
bool lrp[2];
int lr[2];

void c(bool f,char s){
  if(s=='u'){
    if(lrp[f]==0){
      if(lr[!f]>=lr[f])lr[f]++;
      else lr[f]--;
    }
    lrp[f]=1;
  }else {
    if(lrp[f]==1){
      if(lr[!f]>=lr[f])lr[f]++;
      else lr[f]--;
    }
    lrp[f]=0;
  }
}


int main(){
  int n;
  while(cin>>n&&n){
    string s;
    lrp[0]=lrp[1]=0;
    lr[0]=lr[1]=0;
    while(n--){
      cin>>s;
      if(s[0]=='l') c(0,s[1]);
      else c(1,s[1]);
    }
    cout<<min(lr[0],lr[1])<<endl;
  }
  return 0;
}