#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;

    for(int i = 0; i < 250; i++){
      a = 0, b = -1;
      cin >> a >> b;

      if(a + b == -1){
        break;
      }
      else{
        int digit = 0;
        int sum = a + b;
        while(sum > 0){
          sum = sum / 10;
          digit += 1;
        }
        cout << digit << endl;
      }
    }
    
}

