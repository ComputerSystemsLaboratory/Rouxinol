#include <iostream>
#include <string>

using namespace std;

enum STATUS { TOP,
              UP,
              DOWN,
              BOTTOM };
             
int main()
{
  int n;
  string f;
  int count;
  STATUS status;
  
  while (1) {
    count = 0;
    status = BOTTOM;
    cin >> n;
    if (!n) break;
    while (n--) {
      cin >> f;
      if (f[1] == 'u') {
        if (status == UP) {
          status = TOP;
          count++;
        } else if (status == DOWN) {
          status = TOP;
        } else if (status == BOTTOM) {
          status = UP;
        }
      } else {
        if (status == DOWN) {
          status = BOTTOM;
          count++;
        } else if (status == UP) {
          status = BOTTOM;
        } else if (status == TOP) {
          status = DOWN;
        }
      }
    }
    cout << count << endl;
  }
}
  

