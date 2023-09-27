#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,m,p;
  while(cin>>n>>m>>p && (n||m||p)){
    int c=0,w,x;
    for(int i=1;i<=n;i++){
      cin>>x;
      if(i==m) w=x;
      c+=x;
    }
    if(w==0) cout<<0<<endl;
    else cout<<c*(100-p)/w<<endl;
  }

  return 0;
}