#include <iostream>

#define MAX_SET (1000)

using namespace std;

int main()
{   
    int count;
    int size;
    
    int* n = new int[MAX_SET + 1];
    int* x = new int[MAX_SET + 1];

    for (int i = 0; i < MAX_SET + 1; i++) {
         do {
             cin >> n[i] >> x[i];             
         } while ((n[i] < 3 || n[i] > 100) && !(n[i] == 0 && x[i] == 0));
        
         if (n[i] == 0 && x[i] == 0) {
             size = i;
	     break;
         }
    }
   
    for (int i = 0; i < size; i++) {
         count = 0;

         for (int j = 1; j <= n[i] - 2; j++) {
	      for (int k = j + 1; x[i] - j - k > k; k++) {
                   for (int l = k + 1; l <= n[i]; l++) {
		        if (j + k + l == x[i]) {
		            count++;
                            break;
                        }
	 	   }
	      }
         }

         cout << count << endl;
    }

    delete[] n;
    delete[] x;
    
    return (0);
}