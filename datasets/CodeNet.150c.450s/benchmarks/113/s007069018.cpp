#include <iostream>

#define MAX_SIZE (10000)

using namespace std;

int main()
{
    int* x = new int[MAX_SIZE + 1];
    int  size;
 
    for (int i = 0; i < MAX_SIZE + 1; i++) {
         do {
             cin >> x[i];
         } while (x[i] < 0 || x[i] > 10000);

         if (x[i] == 0) {
             size = i;
             break;
         }       
    }
   
    for (int i = 0; i < size; i++) {
         cout << "Case " << i + 1 << ": " << x[i] << endl;
    }

    delete[] x;

    return (0);
}