#include<iostream>
#include<vector>

using namespace std;

int main() {

   int r, c;
   cin >> r >> c;

   vector<int> A(c, 0);
   for (int i = 0; i < r; i++) {
      int t = 0;
      for (int j = 0; j < c; j++) {
         int v;
         cin >> v;
         t += v;
         A[j] += v;
         cout << v << " ";
      }
      cout << t << endl;
   }
   int t = 0;
   for (int i = 0; i < c; i++) {
      t += A[i];
      cout << A[i] << " ";
   }
   cout << t << endl;

   return 0;

}