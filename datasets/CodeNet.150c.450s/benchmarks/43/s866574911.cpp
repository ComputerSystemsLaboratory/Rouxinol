#include <iostream>

using namespace std;

int main()
{
  int n;
  cin >> n;
  while (n != 0) {
    int inputA, inputB;
    int outA(0), outB(0);
    for (int i=0; i<n; i++) {
      cin >> inputA >> inputB;
      if (inputA > inputB) outA += inputA + inputB;
      else if (inputA < inputB) outB += inputA + inputB;
      else { outA += inputA; outB += inputB;}
    }
    cout << outA << ' ' << outB << endl;
    cin >> n;
  }
  return 0;
}