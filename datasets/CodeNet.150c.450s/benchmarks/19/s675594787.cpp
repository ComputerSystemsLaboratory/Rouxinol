#include <iostream>

#define MAX_SIZE (3000)

using namespace std;

void swap (int* x, int* y);

int main()
{   
    int* x = new int[MAX_SIZE + 1];
    int* y = new int[MAX_SIZE + 1];
    int  size;

    for (int i = 0; i < MAX_SIZE + 1; i++) {
         do {
             cin >> x[i] >> y[i];
         } while ((x[i] < 0 || x[i] > 10000) || (y[i] < 0 || y[i] > 10000));

         if (x[i] == 0 && y[i] == 0) {
             size = i;
	     break;
         }        
    }
       
    for (int i = 0; i < size; i++) {
         if (x[i] > y[i]) {
             swap(&x[i], &y[i]);
         }

         cout << x[i] << " " << y[i] << endl;
    }

    delete[] x;
    delete[] y;

    return (0);
}

void swap(int* x, int* y)
{
     int temp = *x;
     *x = *y;
     *y = temp;
}