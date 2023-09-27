#include<iostream>

using namespace std;

int main() {

  int A[20][5];
  int n, N;
  char S;

  for (int i = 0; i < 20; i++)
    for (int j = 0; j < 5; j++)
      A[i][j] = 0;

  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> S >> N;

    if (S == 'S')
      A[N-1][0] = 1;

    else if (S == 'H')
      A[N-1][1] = 1;

    else if (S == 'C')
      A[N-1][2] = 1;

    else
      A[N-1][3] = 1;

  }

  for ( int j = 0; j < 4; j++)
    for (int i = 0; i < 13; i++){

      if (A[i][j] == 0) {
        if (j == 0)
          cout << "S " << i+1 << endl;
        if (j == 1)
          cout << "H " << i+1 << endl;
        if (j == 2)
          cout << "C " << i+1 << endl;
        if (j == 3)
          cout << "D " << i+1 << endl;
      }
    }

  return 0;
}

