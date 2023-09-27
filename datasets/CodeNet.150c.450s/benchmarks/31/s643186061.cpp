#include <iostream>
using namespace std;

int main (int argc, char **argv) {
  int N;
  cin >> N;

  long d;
  long min, pmax;

  // 1st data
  cin >> d;
  min = d;
  pmax = -1.0e9;
    
  for (int i=1; i<N; i++) {
    cin >> d;
    if (d - min > pmax) pmax = d - min;
    if (min > d) min = d;
  }

  cout << pmax << endl;
}
  