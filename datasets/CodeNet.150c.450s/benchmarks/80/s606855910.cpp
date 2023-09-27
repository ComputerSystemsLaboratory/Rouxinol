#include <iostream>
using namespace std;
int main()
{
  int sumA = 0,sumB = 0;
  int A[4] = {};
  int B[4] = {};

  for(int i = 0;i < 4;i++){
    cin >> A[i];
    sumA += A[i];
  }

  for(int i = 0;i < 4;i++){
    cin >> B[i];
    sumB += B[i];
  }

  cout << ((sumA > sumB) ? sumA : sumB) << endl;

  return 0;
}