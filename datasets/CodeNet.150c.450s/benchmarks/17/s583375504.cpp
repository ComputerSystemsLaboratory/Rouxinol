#include <iostream>
using namespace std;

int main() {
  int x[5],xi;
  cin >> x[0] >> x[1] >> x[2] >> x[3] >> x[4];
  for(int i=0;i<5;i++) {
    for(int j=i;j<5;j++) {
      if(x[i] < x[j]) {
        xi = x[i];
        x[i] = x[j];
        x[j] = xi;
      }
    }
  }
  for(int i=0;i<4;i++) {
    cout << x[i] << " ";
  }
  cout << x[4] <<endl;
}