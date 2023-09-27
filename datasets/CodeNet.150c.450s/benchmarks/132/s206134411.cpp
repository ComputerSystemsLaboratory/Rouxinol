#include <iostream>
#define REP(i, a, n) for(int i = (a); i < (n); i++)
using namespace std;

int N, P, a[50];

int main(void) {
  while(cin >> N >> P, N && P) {
    REP(i, 0, N) a[i] = 0;

    for(int i = 0; true; i = (i + 1) % N) {
      if(P == 0) {
        P = a[i];
        a[i] = 0;
      } else {
        P--;
        a[i]++;
        if(P == 0) {
          bool fin = true;
          REP(j, 0, N) if(j != i && a[j] != 0) fin = false;
          if(fin) {
            cout << i << endl;
            break;
          }
        }
      }
    }
  }

  return 0;
}