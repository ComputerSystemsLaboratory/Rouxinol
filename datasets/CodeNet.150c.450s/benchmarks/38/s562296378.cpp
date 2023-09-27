#include <iostream>
using namespace std;

int main() {
  int sides[3];
  int num;

  cin >> num;
  int sumSidesSq=0;
  for(int i=0; i<num; i++) {
    int maxIndex=0, maxValue=0;
    for(int j=0; j<3; j++) {
      cin >> sides[j];
      if(sides[j] > maxValue) {
        maxValue = sides[j];
        maxIndex = j;
      }
    }

    sumSidesSq = 0;
    for(int j=0; j<3; j++) {
      if(j == maxIndex)
        sumSidesSq -= sides[j]*sides[j];
      else
        sumSidesSq += sides[j]*sides[j];
    }
    cout << ( (sumSidesSq == 0) ? "YES" : "NO" ) << endl;
  }
  return 0;
}