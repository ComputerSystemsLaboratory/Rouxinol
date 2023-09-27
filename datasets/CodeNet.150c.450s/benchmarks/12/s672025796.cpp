#include <iostream>
#include<math.h>

using namespace std;

int main(int argc, char *argv[])
{
     int H = 0;
     cin >> H;
     int *arr = new int[H + 1];
     for (int i = 1; i < H + 1; i++) {
         cin >> arr[i];
     }
     for (int i = 1; i < H + 1; i++) {
         if (i == 1) {
             cout << "node " << i << ": "<<"key = "<< arr[i] << ", ";
         } else {
             cout << "node " << i << ": "<<"key = "<< arr[i] << ", " << "parent key = " << arr[int(floor(i / 2))] << ", ";
         }
         if (2*i <= H) {
             cout << "left key = "<< arr[2*i] << ", ";
         }
         if (2*i + 1 <= H) {
             cout << "right key = "<< arr[2*i + 1] << ", ";
         }
         cout << endl;

     }

    return 0;
}

