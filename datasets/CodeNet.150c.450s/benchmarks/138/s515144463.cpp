#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int main(){
  int x,y;

  scanf(" %d %d",&x,&y);

  int t=x;
  x=max(x,y);
  y=min(t,y);



  int ans=x;

  while(x%y!=0){
    ans=x%y;
    x=y;
    y=ans;
  }


  cout << ans << endl;

  return 0;

}