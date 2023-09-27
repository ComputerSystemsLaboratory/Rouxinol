#include <iostream>
using namespace std;

int main()
{
  int n, s, count, max, min, sum, adv;
  while(cin >> n){
    if(n == 0){
      break;
    }
    min = 1001;
    max = -1;
    sum = 0;
    count = 0;
    while(count < n){ 
      count++;
      cin >> s;
      sum += s;
      if(s < min){
        min = s;
      }
      if(s > max){
        max = s;
      }
    }
    sum = sum - max - min;
    adv = sum / (n - 2);
    cout << adv << endl;
  }
  return 0;
}