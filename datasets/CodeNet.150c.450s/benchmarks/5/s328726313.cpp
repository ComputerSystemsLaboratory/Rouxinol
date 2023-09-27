#include <iostream>
using namespace std;
int main(void){
   int a[100];
   int n, i;
   cin >> n;
   for( i = 0; i < n; i++ ){
       cin >> a[i];
   }
   for( i = n - 1; i > 0; i-- ){
       cout << a[i] << ' ';
   }
   cout << a[i] << endl;
}

