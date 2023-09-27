#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int n;

int main(){
  int ave;
  while(cin >> n && (n > 0)){
  int a[100];
  int sum = 0;
  for (int i = 0; i <= n-1; i++){
   cin >> a[i];
   }
   sort(a, a+n);
   for (int j=1; j <= n-2; j++){
     sum += a[j];
	 }
   ave = floor(sum / (n-2));
   cout << ave << endl;
	}
 }