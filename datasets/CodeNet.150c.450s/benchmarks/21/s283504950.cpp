#include <iostream>
using namespace std;
#define REP(i,n) for(int i=0;i<n;i++)

int main(){
  int x,ans=1;
  cin >> x;
  REP(i,3) ans*=x;
  cout << ans << endl;
}