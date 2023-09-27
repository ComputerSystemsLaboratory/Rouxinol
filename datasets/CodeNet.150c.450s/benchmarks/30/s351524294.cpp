#include <iostream>
#define rep(i,a) for(i = 0; i < a; i++)

using namespace std;

int main(void) {

  int i, j, count = 0, N, save, mini;

  cin >> N;

  int A[N];

  rep(i,N) {
    cin >> A[i];
  }

  rep(i,N) {
    mini = i;
    for(j = i ; j < N; j++) {
      if (A[j] < A[mini]) {
	mini = j;
      }
    }
    swap(A[i],A[mini]);
    if(A[mini] != A[i]) {
      count++;
    }
  }

  rep(i,N) {
    cout << A[i];
    if(i == N-1) break;
    cout << " ";
  }

  cout << endl;
  cout << count << endl;

  return 0;

}