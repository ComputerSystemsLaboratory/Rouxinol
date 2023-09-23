#include <iostream>
#define rep(i,a) for(i = 0; i < a; i++)

using namespace std;

int main(void) {

  int i, j, count = 0, N,save;

  cin >> N;

  int A[N];

  rep(i,N) {
    cin >> A[i];
  }

  rep(i,N) {
    for(j = N-1; j > i; j--) {
      if (A[j] < A[j-1]) {
	save = A[j];
	A[j] = A[j-1];
	A[j-1] = save;
	count++;
      }
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