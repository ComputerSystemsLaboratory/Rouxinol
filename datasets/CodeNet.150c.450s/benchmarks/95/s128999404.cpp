#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,m;
  int rc,lc;
  int cnt;
  string str;
  int zen,now;
  while(cin>>n,n){
    rc=lc=0;
    cnt=0;
    for(int i=0;i<n;i++){
      cin>>str;
      if(str[0] == 'r')now = 0;
      else now = 1;
      
      if(str == "lu")lc++;
      if(str == "ru")rc++;
      if(str == "ld")lc--;
      if(str == "rd")rc--;
      if(lc == rc && zen != now)cnt++;
      zen = now;
    }
    cout<<cnt<<endl;
  }
}