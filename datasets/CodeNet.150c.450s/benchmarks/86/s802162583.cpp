#include <iostream>
using namespace std;
int main(){
  int n,m,p;
  while(cin>>n>>m>>p,n||m||p){
    int s=0,w;
    for(int i=1;i<=n;++i){
      int x; cin >> x;
      s+=100*x;
      if(i==m) w=x;
    }
    s-=s*p/100;
    cout << (w?(s/w):0) << endl;
  }
  return 0;
}