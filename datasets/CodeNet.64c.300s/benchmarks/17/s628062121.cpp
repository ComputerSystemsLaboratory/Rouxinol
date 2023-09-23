#include <iostream>
using namespace std;

int f(int p, int x){
  return p * (100 + x) / 100;
}

int main(){
  int x, y, s;

  while(cin >> x >> y >> s, x || y || s){
    int res = 0;

    for(int i = 1; i < s; i++){
      for(int j = 1; j < s; j++){
        int sum = f(i, x) + f(j, x);
        if(sum != s) continue;
        res = max(res, f(i, y) + f(j, y));
      }
    }
    cout << res << endl;
  }
}