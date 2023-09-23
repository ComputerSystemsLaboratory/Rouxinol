#include <iostream>

using namespace std;

int main(){
  int n, now, count;
  while(1){
    cin >> n;
    now = 0;
    count = 0;
    if(n==0) break;
    
    while(1){
      if(1000-n-now >= 500){
        now += 500;
        count++;
      } else if (1000-n-now >= 100){
        now += 100;
        count++;
      } else if (1000-n-now >= 50){
        now += 50;
        count++;
      } else if (1000-n-now >= 10){
        now += 10;
        count++;
      } else if (1000-n-now >= 5){
        now += 5;
        count++;
      } else {
        now += 1;
        count++;
      }

      if(1000-n-now == 0) {
        cout << count << endl;
        break;
      }
    }
  }

  return 0;
}