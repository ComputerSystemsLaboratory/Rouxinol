#include <iostream>
using namespace std;

int main(void){
  int n, p[31] = {1, 1, 2};
  for(int i = 3; i <= 30; i++){
    p[i] = p[i-1] + p[i-2] + p[i-3];
  }
  while(true){
    cin >> n;
    if(n == 0) break;
    int y = (p[n] / 10 / 365);
    if(p[n] % 3650 != 0) y++;
    cout << y << endl;
  }
  return 0;
}