#include <iostream>
using namespace std;

int main(void){
   int n,a[100];
   cin >> n;
   for(int i = 1; i <= n; i++){
       cin >> a[i];
   }

   cout << a[n];
   for(int i = n-1; i >= 1; i--){
       cout << " " << a[i];
   }
   cout << endl;
   return 0;
}
