#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  bool ok[30]={};
  int x;
  for(int i=0;i<28;i++) {
    cin >> x; x--;
    ok[x] = 1;
  }
  int res[2], n=0;
  for(int i=0;i<30;i++) if(!ok[i]) res[n]=i+1, n++;
  sort(res, res+2);
  for(int i=0;i<2;i++) cout<<res[i]<<endl;
  
  return 0;
}