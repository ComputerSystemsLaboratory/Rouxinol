#include <iostream>
#include <algorithm>
using namespace std;

void mini(int x, int y){
  cout << min(x, y) << " " << max(x, y) << endl;
}

int main(){
  int x, y;

  while(1){
    cin >> x >> y;
    if(x == 0 && y == 0)  break;
    mini(x, y);
  }
}