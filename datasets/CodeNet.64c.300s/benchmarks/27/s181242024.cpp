#include <iostream>
using namespace std;

int main(){
  while(true){
    int n, x, count = 0;
    cin >> n >> x;
    if(n == 0 && x == 0) break;

    for(int i = n; i >= 3; i--){
      for(int j = i - 1; j >= 2; j--){
        for(int k = j - 1; k >= 1; k--){
          if( i == j || j == k || k == i) continue;
          if((i + j + k) == x) count += 1;
        }
      }
    }

    cout << count << endl;
  }
  return 0;
}