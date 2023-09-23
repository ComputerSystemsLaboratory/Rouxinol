#include<iostream>

using namespace std;

int main() {

   int n, m;
   cin >> n >> m;
   int mtrxA[n][m], mtrxB[m];
   for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
         int v;
         cin >> v;
         mtrxA[i][j] = v;
      }
   }

   for (int i = 0; i < m; i++) {
      int v;
      cin >> v;
      mtrxB[i] = v;
   }

   for (int i = 0; i < n; i++) {
      long sum = 0;
      for (int j = 0; j < m; j++) {
         sum += mtrxA[i][j] * mtrxB[j];
      }
      cout << sum << endl;
   }

   return 0;

}