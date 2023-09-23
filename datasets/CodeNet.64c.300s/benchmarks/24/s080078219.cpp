#include <iostream>
using namespace std;

int main()
{
  int n;
  int j, k;
  int suma, sumb;
  
  
  while (cin >> n){
    if (n == 0){
      break;
    }
    suma = sumb = 0;
    for (int i = 0; i < n; i++){
      cin >> j >> k;

      if (j < k){
        sumb += j + k;
     }
      else if (j > k){
        suma += j + k;
      }
     else {
        suma += j;
       sumb += k;
      }
    }
   cout << suma << " " << sumb << endl;
  }
  return 0;
}