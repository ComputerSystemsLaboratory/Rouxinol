#include <iostream>
using namespace std;
#define NUM 100
#define rep(i,a,n) for(i = a ; i < n; i++) 

void trace(int[],int);

int main(void) {

  int i, j, a, N;
  int T[NUM] = {};

  cin >> a;

  rep(i,0,a) {

    cin >> T[i];

  }

  trace(T,a);

  rep(i,1,a) {

    N = T[i];
    j = i - 1;

    while (j >= 0 && T[j] > N) {

      T[j + 1] = T[j];
      j--;

    }

    T[j + 1] = N;
    trace(T,a);

  }

  return 0;

}

void trace(int T[],int n) {

  int i;

  rep(i,0,n) {
    if(i > 0) {
      cout << " ";
    }

    cout << T[i];

  }

  cout << endl;

}