#include <stdio.h>
#include <math.h>
#include <iostream>
 
using namespace std;
 
int main() {
 
    int counter[101] = {0};
    int a;
    int MAX = 0;
    int i = 0;
     
    while (cin >> a) {
        counter[a]++;
    }
 
    for (int j = 1; j < 101; j++) {
        MAX = max(MAX, counter[j]);
    }
 
    for (int k = 1; k < 101; k++) {
        if (MAX == counter[k]) {
            cout << k << endl;
        }
    }
 
    return 0;
}