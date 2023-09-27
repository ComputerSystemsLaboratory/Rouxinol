#include<bits/stdc++.h>
using namespace std;
int main(){
  int x,y,ma,mi;
  cin>>x>>y;
  ma=max(x,y);
  mi=min(x,y);
  while(1){
    if(ma%mi==0){
      cout<<mi<<endl;
      break;
    }
    swap(ma,mi);
    mi=mi%ma;
  }
  return 0;
}