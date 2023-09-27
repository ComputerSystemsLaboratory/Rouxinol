#include <iostream>
using namespace std;
int p(int a){return a/2;}
int l(int a){return a*2;}
int r(int a){return a*2+1;}
int main(){

  int n,h[260];
  cin>>n;
  for(int i=1;i<=n;i++) cin>>h[i];
  for(int i=1;i<=n;i++){
    cout<<"node "<<i<<": ";
    cout<<"key = "<<h[i]<<", ";
    if(p(i)>=1) cout<<"parent key = "<<h[p(i)]<<", ";
    if(l(i)<=n) cout<<"left key = "<<h[l(i)]<<", ";
    if(r(i)<=n) cout<<"right key = "<<h[r(i)]<<", ";
    cout<<endl;
  }

  return 0;

}