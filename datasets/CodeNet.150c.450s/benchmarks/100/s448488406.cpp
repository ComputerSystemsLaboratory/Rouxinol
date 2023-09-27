#include <iostream>
using namespace std;

int main(void) {
  int n;
  cin >> n;
  double ans = 1;
  for(; n != 1; n--) {
    ans *= n;
  }
  printf("%.0f\n", ans);
  
  return 0;
}