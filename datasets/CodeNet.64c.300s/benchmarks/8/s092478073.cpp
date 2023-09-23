#include <iostream>
#define REP(i,n) for(int i=0;i<n;i++)
using namespace std;
int main(void){
  cin.tie(0);
  ios::sync_with_stdio(false);

  int i = 1;
  int x;
  int n; cin >> n;

  while (i <= n) {
    if (0 == i % 3) {
      cout << " " << i;
    } else if (3 == i % 10) {
      cout << " " << i; 
    } else if (30 < i) {
      x = i;
      while (x = x / 10) {
        if (3 == x % 10) {
          cout << " " << i;
          break;
        }
      }
    } 
    i++;
  }

  cout << endl;

  return 0;
}
