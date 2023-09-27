#include <iostream>
#include <algorithm>
using namespace std;

int tax(int n, int t){
  return n * (100 + t) / 100;
}


int main(void){
  while(true){
    int x, y, s;
    cin >> x >> y >> s;
    if(x == 0 && y == 0 && s == 0){ break; }
    
    int ans = 1;
    for(int i = 1; i < s; i++)
      for(int j = 1; j < s; j++){
        if(tax(i, x) + tax(j, x) == s){
          ans = max(ans, tax(i, y) + tax(j, y));
        }
      }

    cout << ans << endl;
  }

  return 0;
}