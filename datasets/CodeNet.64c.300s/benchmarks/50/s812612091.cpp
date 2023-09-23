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
  int flag = 1;
  while (flag) {
    flag = 0;
    for (int j=N-1; j>=1; --j) {
      if (A[j] < A[j-1]) {
        swap(A[j], A[j-1]);
        flag = 1;
        count++;
      }
    }
  }

  disp();
  cout << count << endl;
  return 0;
}