#include <iostream>
#include <stack>

using namespace std;

long long int db[100][21];

int main() {
  int N;
  int num[100];
  int ans;
  cin >> N;
  N--;
  for (int i = 0; i < N; i++) cin >> num[i];
  cin >> ans;

  db[0][num[0]] = 1;
  for (int i = 0; i < N-1; i++) {
    for (int j = 0; j < 21; j++) {
      if (j + num[i+1] <= 20) db[i+1][j + num[i+1]] += db[i][j];
      if (j - num[i+1] >= 0)  db[i+1][j - num[i+1]] += db[i][j];
    }

  }
  cout << db[N-1][ans] << endl;
  return 0;
}