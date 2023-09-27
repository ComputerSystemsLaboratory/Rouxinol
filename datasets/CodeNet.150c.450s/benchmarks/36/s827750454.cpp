#include <iostream>
using namespace std;
#define D 600

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int d;
  while(cin >> d) {
    int s = 0;
    for(int n=d;n<D;n+=d) {
      s += n*n * d;
    }
    cout << s << endl;
  }
}