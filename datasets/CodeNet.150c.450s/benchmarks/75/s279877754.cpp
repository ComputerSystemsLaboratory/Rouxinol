#include <iostream>
#include <algorithm>
using namespace std;
int n[500001],a;

void move(int now){
  int l,h;
  if(now*2<=a&&n[now*2]>n[now])l=now*2;
  else l=now;
  if(now*2+1<=a&&n[now*2+1]>n[l])l=now*2+1;

  if(l!=now){
    h=n[now];
    n[now]=n[l];
    n[l]=h;
    move(l);
  }
}

int main(){

  cin>>a;
  for(int i=1;i<=a;i++)cin>>n[i];
  
  for(int i=a/2;i>=1;i--)move(i);
  
  for(int i=1;i<=a;i++)cout<<" "<<n[i];
  cout<<endl;
  return 0;
}