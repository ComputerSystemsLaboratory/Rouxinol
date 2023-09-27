#include <iostream>

using namespace std;

int main()
{
    int n;
    
    do {
        cin >> n;
    } while (n <= 0 || n > 10000);

    long* a = new long[n];
   
    long sum = 0;
    long max = -1000001;
    long min = 1000001;

    for (int i = 0; i < n; i++) {
         do {
             cin >> a[i];
         } while (a[i] < -1000000 || a[i] > 1000000);

         sum += a[i];

         if (a[i] < min) {
	     min = a[i];
         } 

         if (a[i] > max) {
	     max = a[i];
         }
    }
      
    cout << min << " " << max << " " << sum << endl; 
   
    delete[] a;
   
    return (0);
}
   