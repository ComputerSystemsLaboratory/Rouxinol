#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int x=100000, n;
    cin >> n;
    for(int i=0;i<n;i++){
      x *= 1.05;
      if(x%1000 == 0) ;
      else x = (x/1000)*1000 + 1000;
    }
    cout << x << endl;
    return 0;
}