#include <iostream>

using namespace std;

int main()
{
    int n;
    int b, f, r, v;
    int count[4][3][10];

    for (int i = 0; i < 4; i++) {
         for (int j = 0; j < 3; j++) {
	      for (int k = 0; k < 10; k++) {
		   count[i][j][k] = 0;
              }
	 }
    }
    
    cin >> n;

    for (int i = 0; i < n; i++) {
         do {
             cin >> b >> f >> r >> v;
         } while ((b < 1 || b > 4) || (f < 1 || f > 3) || (r < 1 || r > 10) ||
                  (count[b - 1][f - 1][r - 1] + v > 9));
 
	 count[b - 1][f - 1][r - 1] += v;     
    }

    for (int i = 0; i < 4; i++) {         
	 for (int j = 0; j < 3; j++) {
              cout << " ";

	      for (int k = 0; k < 10; k++) {
	           cout << count[i][j][k];

                   if (k != 9) {
                       cout << " ";
                   }
              }     

              cout << endl;                     
	 }   

         if (i != 3) {
             cout << "####################" << endl;
         }
    }
    
    return (0);
}