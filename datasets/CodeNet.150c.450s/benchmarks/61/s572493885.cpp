#include <iostream>
using namespace std;

int main(){
  int n, a, b, c, x, y[10001];
  while(cin >> n >> a >> b >> c >> x, n){
    for(int j = 0 ; j < n ; j++){
      cin >> y[j];
    }
    int frame = 0, i = 0;
    while(true){
      if(x == y[i]) i++;
      if(i == n || frame > 10000) break;
      frame++;
      x = (a * x + b)%c;
    }
    if(frame > 10000){
      cout << -1 << '\n';
    }else{
      cout << frame << '\n';
    }
  }
  
  
  return 0;
}