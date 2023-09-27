#include <iostream>
using namespace std;

int main(){
  int n;
  int coin[] = {500, 100, 50, 10, 5, 1};

  while(cin >> n, n){
    n = 1000 - n;
    int sum = 0;
    for(int i = 0; i < 6; i++){
      sum += n / coin[i];
      n %= coin[i];
    }
    cout << sum << endl;
  }
}