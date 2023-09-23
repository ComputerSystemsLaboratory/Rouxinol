#include <iostream>
#include <math.h>
using namespace std;
int gcd(int a1, int b1) {
    if(a1 == 0 || b1 == 0) {
        return 0;
    }
    if(a1 >= b1) {
        if(a1 % b1 == 0) {
            return b1;
        } else {
            return gcd(b1, a1 % b1);
        }
    } else {
        if(b1 % a1 == 0) {
            return a1;
        } else {
            return gcd(a1, b1 % a1);
        }
    }
}

int main(void){
    // Here your code !
    int n, k, p=0;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++) {
        k = 0;
        cin >> a[i];
        if(a[i] == 2) {
            p++;
            continue;
        } else if(a[i] % 2 == 0) {
            continue;
        }
        for(int j=0;j<floor(sqrt(a[i]));j++) {
            if(a[i] % (j+1) == 0) {
                k++;
            }
        }
        if(k == 1) {
            p++;
        }
    }
    cout << p << endl;
}