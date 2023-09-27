#include <iostream>
#include <string>
using namespace std;

bool judge1(int x);
bool judge2(int x);

int main() {



  int n, x;
  cin >> n;
  for(int i = 1; i <= n; i++){
    x = i;
    if(judge1(x) || judge2(x)){
      cout << " " << i;
      continue;
    }

    while(x){
      x /= 10;
      if(judge2(x)){
        cout << " " << i;
        break;
      }
    }
  }

  cout << endl;

  return 0;  
}      

bool judge1(int x) {
  return x % 3 == 0;
}
 
bool judge2(int x) {
  return x % 10 == 3;
}