#include <iostream>
#include <algorithm>
using namespace std;
int main(void){
   int n, a[100], count = 0;
   cin >> n;
   for(int i = 0; i < n; i++) cin >> a[i];
   for(int i = 0; i < n; i++) {
	   for(int j = n-1; j >= i+1; j--) {
		   if(a[j] < a[j-1]) {
			   count++;
			   int temp = a[j];
			   a[j] = a[j-1];
			   a[j-1] = temp;
		   }
	   }
   }
   for(int i = 0; i < n; i++) {
	   if(i == 0) cout << a[i];
	   else cout << " " << a[i];
   } cout << endl;
   cout << count << endl;
   return 0;

}