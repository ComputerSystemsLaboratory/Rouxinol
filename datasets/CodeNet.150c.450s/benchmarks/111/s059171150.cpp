// AOJ 0557
#include<iostream>
#define REP(i,n) for(int i=0;i<(int)(n);i++)
using namespace std;

typedef long long int number;

const int NMAX = 108;

int N, sequence[NMAX];
number kind[21];

number solve() {
  kind[sequence[0]] = 1;

  for (int i = 1; i < N - 1; i++) {
    number nkind[21];
    int s = sequence[i];

    REP(i, 21) {
      nkind[i] = 0;
    }

    for (int n = s; n < 21; n++) {
      nkind[n] = kind[n - s];
    }

    for (int n = 20 - s; n >= 0; n--) {
      nkind[n] += kind[n + s];
    }

    REP(i, 21) {
      kind[i] = nkind[i];
    }
  }

  return kind[sequence[N-1]];
}

int main() {
  cin >> N;
  REP(i, N) {
    cin >> sequence[i];
  }

  cout << solve() << endl;
}