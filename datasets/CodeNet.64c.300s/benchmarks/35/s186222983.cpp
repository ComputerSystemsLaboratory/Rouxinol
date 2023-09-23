#include <iostream>
#include <cstdio>

using namespace std;

static const int N = 100;
static int M[N + 1][N + 1] = {}, p[N + 1] = {};

int main() {
  int n;
  cin >> n;

  int number, count, value;
  for (int i = 0; i < n; i++) {
    cin >> number >> count;
//    printf("n = %d, number = %d, count = %d\n", n, number, count);
    for (int j = 0; j < count; j++) {
     cin >> value;
//     printf("value = %d.\n", value);
     M[number - 1][value - 1] = 1; 
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {    
      if (j != 0) {
        cout << " ";
      }
      cout << M[i][j];
    } 
    cout << endl;
  }

  return 0;
}

