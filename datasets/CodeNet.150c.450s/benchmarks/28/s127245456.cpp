#include <iostream>

using namespace std;
typedef long long LL;

int n, k;
LL w[100000];

bool check(LL P) {
   int i = 0;
   for (int j = 0; j < k; j++) {
       LL s = 0;
       while (s + w[i] <= P) {
           s += w[i++];
           if (i == n)
               return true;
       }
   }
   return false;
}

int solver() {
   LL left = 0, right = 100000 * 10000;
   LL mid;

   while (left < right) {
       mid = (left + right) / 2;
       if (check(mid))
           right = mid;
       else   
           left = mid + 1;
   }
   return right;
}

int main()
{
   cin >> n >> k;
 
   for (int i = 0; i < n; i++)
       cin >> w[i];
 
   cout << solver() << endl;

   return 0;
}