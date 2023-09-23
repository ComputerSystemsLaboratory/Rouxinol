#include <iostream>
using namespace std;

int main(){
  int sum[2] = {0};

  for(int i = 0; i < 2; i++){
    for(int j = 0; j < 4; j++){
      int x;
      cin >> x;
      sum[i] += x;
    }
  }

  cout << max(sum[0], sum[1]) << endl;
}