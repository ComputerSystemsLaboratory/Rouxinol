#include <iostream>

using namespace std;

int main(void) {
  int m,f,r;
  int sum;
  while(cin >> m >> f >> r && (m != -1 || f != -1 || r != -1)) {
    sum = m + f;
    if(m == -1 || f == -1 || sum < 30)
      cout << 'F' << endl;
    else if(sum >= 80)
      cout << 'A' << endl;
    else if(sum >= 65 && sum < 80)
      cout << 'B' << endl;
    else if(sum >= 50 && sum < 65)
      cout << 'C' << endl;
    else if(sum >= 30 && sum < 50) {
      if(r >= 50)
        cout << 'C' << endl;
      else
        cout << 'D' << endl;
    }
  }
  return 0;
}