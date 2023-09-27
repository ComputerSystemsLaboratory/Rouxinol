#include <iostream>
using namespace std;

int main(void){
  while(true){
    int x, y, s, max = 0;
    cin >> x >> y >> s;
    if(x == 0) break;
    for(int i = 1; i < s; i++){
      for(int j = 1; j < s; j++){
        int a = i, b = j;
        if( (a*(100+x)/100) + (b*(100+x)/100) == s){
          a = a * (100 + y) / 100;
          b = b * (100 + y) / 100;
          if(a + b > max) max = a + b;
        }
      }
    }
    cout << max << endl;
  }
  return 0;
}