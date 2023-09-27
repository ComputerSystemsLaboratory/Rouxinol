#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int n,i = 1,sqrt;

    while (cin >> n){
        sqrt = 0;
        i =0;
        while (i * n < 600){
            sqrt += n * pow(i*n,2);
            i++;
        }
        cout << sqrt << endl;
    }
    return 0;
}