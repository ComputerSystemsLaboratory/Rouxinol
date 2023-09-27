#include <bits/stdc++.h>
using namespace std;

int main(){
  int a = 0, d = 0, n = 0;
  int sum = 0;
  
  while(1){
    int count = 0;
    cin >> a >> d >> n;
    if(a == 0 && d == 0 && n == 0) break;
    sum = a;
    while(1){
      if(sum == 2){
        count++;
      }
      else if(sum > 2){
        bool flag = true;
        if(sum % 2 == 0) flag = false;
        for(int i = 3; i <= sqrt(sum); i += 2){
          if(sum % i == 0){
            flag = false;
            break;
          }
        }
        if(flag) count++;
      }

      if(count == n) break;
      sum += d;
    }
    cout << sum << endl;
  }
  
  return 0;
}