#include<iostream>

using namespace std;

int main() {

   int n, x;
   cin >> n >> x;
   while (n != 0 || x != 0) {
      if (x < 6 || x > 3 * n - 3) {
         cout << 0 << endl;
         cin >> n >> x;
         continue;
      }
      int a, b, c;
      a = x / 3;
      b = (x - a) / 2;
      c = x - (a + b);
      while (c < n) {
         if (a == 1) {
                    if (b == 2) {
                           break;
                        }
            b--;
         } else {
            a--;
         }
         c++;
      }
      while (a > 1 && b < n - 1) {
         a--;
         b++;
      }

      int cnt = 0;
      while (a <= n - 2) {
         cnt += (c + 1 - b) / 2;
         a++;
         b--;
         while (b <= a) {
            b++;
            c--;
         }
         if (b >= c) {
            break;
         }
      }
      cout << cnt << endl;
      cin >> n >> x;
   }

   return 0;

}