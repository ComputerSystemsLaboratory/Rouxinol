#include "bits/stdc++.h"
using namespace std;

int main(){
  int x,y,s;
  int nx,ny;

  while(1){
    int MAX=0;
    cin >> x >> y >> s;
    if(!x && !y && !s)break;

    for(double i=1;i<s/2+1;++i){
      double j=s-i+0.99999999999999;
      double k=i+0.99999999999999;
      nx=k*100/(100+x);
      ny=j*100/(100+x);
      if((nx*(100+x)/100+ny*(100+x)/100)!=s)continue;
      // cout << "nx "<< nx <<"ny " << ny <<endl;
      // cout << "nx "<< nx*(100+y)/100 <<"ny " << ny*(100+y)/100 <<((int)nx*(100+y)/100+(int)ny*(100+y)/100) <<endl;
      MAX=max(MAX,(nx*(100+y)/100+ny*(100+y)/100));
    }
    cout << MAX <<endl;
  }
}