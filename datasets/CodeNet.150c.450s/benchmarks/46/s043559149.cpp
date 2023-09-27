#include <iostream>
using namespace std;

int main(){

 int n, x, c;

 while(1) {
  cin >> n >> x;
  if (n == 0 && x == 0) break;

  c = 0;

  for (int i = 1; i < n - 1; i++) {
   for (int j = i + 1; j < n; j++) {
    for (int k = j + 1; k <= n; k++) {
     if (x == i + j + k) c++;
    }
   }
  }

  cout << c << endl;
 }
 
 return 0;
}