#include <iostream>

#define SIZE 1001

using namespace std;

int main() {
    long  A,B,D,i,j,k,day;
    long c[26],t[SIZE];
    long s[SIZE][26],last[26];
  //  long long int A[100][100];

    cin >> D;
    // cout << "D = " << D << endl;
    for (i=0;i<26;i++)
      cin >> c[i];
    for (j=0;j<D;j++) {
      for (i=0;i<26;i++)
        cin >> s[j][i];
      }
    for (i=0;i<D;i++)
        cin >> t[i];

    long satisf;

    satisf = 0;
    for (i=0;i<26;i++)
      last[i] = 0;
    for (day=1;day<=D;day++) {
      // t[day-1] est le  type entre 1 et 26
      // donc on augmente la satisfaction de s[day-1][t[day-1]]
      satisf += s[day-1][t[day-1]-1];
      // on met a jour last
      last[t[day-1]-1]=day;
      for (i=0;i<26;i++)
        satisf -= c[i]*(day-last[i]);
      cout << satisf << endl;
      // c[t[day-1]-1] est
    }


  return 0;

}
