#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main(void)
{
  int n,x;
  string s;
  cin >> n;

  for(int i=1; i<=n; i++){
    x = i;
    s = std::to_string(x);
    if(x % 3 == 0 || x % 10 ==3){
      cout << " " << i; continue;
    }
    else{
      int k=s.size();
      while(k>0){
        k=k-1;
        int j = pow(10,k);
        if( (x / j) % 10 == 3){
          cout << " " << i;
          break;
        }
      }
    }
  }
  cout << endl;

  return 0;
}