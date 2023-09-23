#include <iostream>
#include <algorithm>
using namespace std;
int main(void){
   int n, a[100], count = 0;
   cin >> n;
   for(int i = 0; i < n; i++) cin >> a[i];
   for(int i = 0; i < n; i++) {
	   int mina = a[i];
	   int minj = i;
	   for(int j = i+1; j < n; j++) {
		   if(mina > a[j]) {
			   mina = a[j];
			   minj = j;
		   }
	   }
	   if(minj != i) {
	       a[minj] = a[i];
		   a[i] = mina;
		   count++;
	   }
   }
   for(int i = 0; i < n; i++) {
	   if(i) cout << " " << a[i];
	   else cout <<a[i];
   } cout << endl;
   cout << count <<endl;
   return 0;

}