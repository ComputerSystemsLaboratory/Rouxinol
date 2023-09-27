#include <iostream>
using namespace std;

int main(){
  int m=1,u=1,n,h;
  cin>>n;
  for(int i=2;i<=n;i++){
    h=u;
    u+=m;
    m=h;
  }
  cout<<u<<endl;
  return 0;
}