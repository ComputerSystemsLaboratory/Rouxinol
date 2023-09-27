#include <iostream>
using namespace std;
int main(){
  int n;
  while(true){
    cin >> n;
    if(n == 0){
      break;
    }
    int table[n+4];
    fill(table, table+(n+4), 0);
    table[0] = 1;
    for(int i = 0; i < n; ++i){
      table[i+1] += table[i];
      table[i+2] += table[i];
      table[i+3] += table[i];
    }
    cout << (table[n] / 10 / 365) + 1<< endl;
  }
  return 0;
}