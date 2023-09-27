#include <iostream>
#include <vector>
using namespace std;

#define LIMIT 10001

int main(void){
  while(true){
    int n, a, b, c, x;
    cin >> n >> a >> b >> c >> x;
    if(n == 0 && a == 0 && b == 0 && c == 0 && x == 0){ break; }
    
    vector<int> y(n);
    for(int i = 0; i < n; i++){ cin >> y[i]; }

    int turn, reel = 0;
    for(turn = 0; turn <= LIMIT && reel != n; turn++){
      if(x == y[reel]){ ++reel; }
      x = (a * x + b) % c;
    }

    if(turn > LIMIT){ cout << -1 << endl; }
    else{ cout << turn - 1 << endl; }
  }

  return 0;
}