#include <iostream>
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
  disp();
  for (int i=1; i<N; ++i) {
    int v = A[i];
    int j = i - 1;
    while ( (j>=0) && (A[j] > v) ) {
      A[j+1] = A[j];
      j--;
    }
    A[j+1] = v;
    disp();
  }
  
  return 0;
}