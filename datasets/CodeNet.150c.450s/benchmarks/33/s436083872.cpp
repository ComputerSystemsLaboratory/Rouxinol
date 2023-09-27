#include<bits/stdc++.h>
using namespace std;

int main(){
  while(true){
    int x,y,s;
    int mx = 0;
    cin>>x>>y>>s;
    if(x==0&&y==0&&s==0) break;
    for(int t=1;t<s;t++){
      for(int u=1;u<s;u++){
        if((t*(100+x)/100+u*(100+x)/100)==s){
          mx = max(mx,(t*(100+y)/100+u*(100+y)/100));
        }
      }
    }
    cout<<mx<<endl;
  }
  return 0;
}

