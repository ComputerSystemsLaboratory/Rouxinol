#include <iostream>
#include <cstring>
using namespace std;

bool flg[32];

int main(){
  memset(flg, 0, sizeof(flg));

  for(int i = 0; i < 28; i++){
    int x;
    cin >> x;
    flg[x] = true;
  }

  for(int i = 1; i <= 30; i++){
    if(!flg[i]){
      cout << i << endl;
    }
  }
}