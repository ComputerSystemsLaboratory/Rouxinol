#include <iostream>
using namespace std;

int s[30];
int n;

int main() {
  
  while(1) {
    cin >> n;
    if(!n)break;
    
    s[0] = 1;
    s[1] = 2;
    s[2] = 4;
    
    for(int i=3;i<n;i++) {
      s[i] = s[i-1]+s[i-2]+s[i-3];
    }
    int r = s[n-1]/10;
    r += s[n-1]%10?1:0;
    r = (r-1)/365 + 1;
    cout << r << endl;
    
  }
  return 0;
}