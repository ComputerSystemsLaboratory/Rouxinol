#include <iostream>
using namespace std;
int main(){
  int n, x;
  int i = 1;
  cin >> x;
  while(1){
    n = i;
    if(n%3 == 0)
     cout << ' ' << i;
     else{
      while(1){
       if(n%10 == 3){
         cout << ' ' << i;
         break;
       }
       n /= 10;
       if(!(n))
         break;
      }
    }
    if(!(++i <= x))
        break;
  }
  cout << endl;
  return 0;
}