#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char* argv[]) {
  int N; cin >> N;
  vector<int> A(N);

  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }

  int cnt = 0;
  for (int i = 0; i < N; i++) {
    int mini = i;
    for (int j = i; j < N; j++) {
      if (A[j] < A[mini]) mini = j;
    }
    swap(A[i], A[mini]);
    if (i != mini)
      cnt++;
  }

  for (int i = 0; i < N; i++) {
    cout << A[i];
    if (i == N-1) cout << endl;
    else cout << ' ';
  }
  cout << cnt << endl;
  return 0;
}