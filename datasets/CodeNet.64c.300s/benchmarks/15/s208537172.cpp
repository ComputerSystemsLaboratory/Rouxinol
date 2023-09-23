#include <iostream>
#include <algorithm>
using namespace std;

int N;
int A[100];

void disp(void)
{
  for (int i=0; i<N; ++i) {
    cout << A[i];
    if (i != (N-1)) {
      cout << " ";
    } else {
      cout << "\n";
    }
  }
}

int main(void)
{
  cin >> N;
  for (int i=0; i<N; ++i) {
    cin >> A[i];
  }
  int count = 0;

  for (int i=0; i<N; ++i) {
    int minj = i;
    for (int j=i; j<N; ++j) {
      if (A[j] < A[minj]) minj = j;
    }
    if (i != minj) {
      swap(A[i], A[minj]);
      count++;
    }
  }
  
  disp();
  cout << count << endl;
  return 0;
}