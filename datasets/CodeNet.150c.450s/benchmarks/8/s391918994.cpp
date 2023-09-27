#include <iostream>
#include <string>
using namespace std;

int main(){
  int n, taro, hanako;
  string a, b;

  cin >> n;

  taro = 0;
  hanako = 0;
  for(int i = 0; i < n; i++) {
    cin >> a >> b;
    if (a > b) {
      taro += 3;
    }
    else if (a < b) {
      hanako += 3;
    }
    else {
      taro += 1;
      hanako += 1;
    }
  }

  cout << taro << " " << hanako << endl;

  return 0;
}
