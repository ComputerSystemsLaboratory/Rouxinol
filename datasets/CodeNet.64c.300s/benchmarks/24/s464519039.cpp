#include <iostream>
using namespace std;
int main(){
  int t;
  while(cin>>t && t > 0){
    int p1 = 0, p2 = 0;
    while(t > 0){
      int a = 0, b = 0;
      cin >> a >> b;
      if(a < 0 || a > 9 || a < 0 || a > 9){
        continue;
      }
      if(a > b){
        p1 += a + b;
      }
      else if(a < b){
        p2 += a + b;
      }
      else{
        p1 += a;
        p2 += b;
      }
      t--;
    }
    cout << p1 << " " << p2 << endl;
  }
  return 0;
}

