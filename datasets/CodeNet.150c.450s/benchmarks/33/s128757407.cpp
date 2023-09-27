#include <iostream>
using namespace std;

int a,b,c;

int solve(){
  int maximum = 0;
  for(int i = 1;i < c;++i){
    for(int j = 1;j < c;++j){
      int pre = i * (100 + a) / 100 + j * (100 + a) / 100;
      if(pre == c){
	maximum = max(maximum, i * (100 + b) / 100 + j * (100 + b) / 100);
      }
    }
  }
  return maximum;
}

int main() {
  while(cin >> a >> b >> c && a > 0){
    cout << solve() << endl;
  }
}

