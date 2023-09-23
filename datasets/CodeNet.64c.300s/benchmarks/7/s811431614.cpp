#include<iostream>
#include<string>
#include<bitset>

using namespace std;

int main() {

   int n;
   cin >> n;
   bitset<52> bit;
   for (int i = 0; i < n; i++) {
      string soo;
      int val;
      cin >> soo >> val;
      if (soo == "S") {
         bit.set(13 * 0 + val - 1);
      } else if (soo == "H") {
         bit.set(13 * 1 + val - 1);
      } else if (soo == "C") {
         bit.set(13 * 2 + val - 1);
      } else if (soo == "D") {
         bit.set(13 * 3 + val - 1);
      }
   }

   for (int i = 0; i < 52; i++) {
      if (!bit[i]) {
         switch (i / 13) {
         case 0: {
            cout << "S " << (i % 13) + 1 << endl;
            break;
         }
         case 1: {
            cout << "H " << (i % 13) + 1 << endl;
            break;
         }
         case 2: {
            cout << "C " << (i % 13) + 1 << endl;
            break;
         }
         case 3:
            cout << "D " << (i % 13) + 1 << endl;
         }
      }
   }

   return 0;

}