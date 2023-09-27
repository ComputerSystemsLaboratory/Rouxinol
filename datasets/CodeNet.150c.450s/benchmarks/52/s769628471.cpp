#include <iostream>
using namespace std;

int main() {
  int order,i;
  int syako[1000];
  i=0;
  while(cin >> order) {
    if(order != 0) {
      syako[i] = order;
      i++;
    }
    else {
      cout << syako[i-1] << endl;
      i--;
    }
  }
}