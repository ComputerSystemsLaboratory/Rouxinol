#include<iostream>

using namespace std;

int main() {

   int m = 0, f = 0, r = 0;
   cin >> m >> f >> r;
   while (m >= 0 || f >= 0 || r >= 0) {
      if (m < 0 || f < 0) {
         cout << "F";
      } else if (m + f < 30) {
         cout << "F";
      } else if (m + f < 50) {
         if (r >= 50) {
            cout << "C";
         } else {
            cout << "D";
         }
      } else if (m + f < 65) {
         cout << "C";
      } else if (m + f < 80) {
         cout << "B";
      } else {
         cout << "A";
      }
      cout << endl;
      cin >> m >> f >> r;
   }

   return 0;

}