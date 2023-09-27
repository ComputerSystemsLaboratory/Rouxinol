#include <iostream>
using namespace std;

int main(){
  int n, debt = 100000;
  cin >> n;

  for (int i = 1; i <= n; i++){
    debt *= 105;
    debt /= 100;
    if (debt % 1000 > 0){
      debt /= 1000;
      debt++;
      debt *= 1000;
    }
  }
  cout << debt << "\n";

  return 0;
}