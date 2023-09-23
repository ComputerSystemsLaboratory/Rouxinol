#include <iostream>
#include <cmath>
using namespace std;

bool IsPrime(int a) {
    if(a==2) return true;

    if (a<2 || a%2==0) return false;

    int i = 3;
    while(i<=sqrt(a)) {
        if(a%i==0) return false;
        i = i + 2;
    }

    return true;
}

int main() {
    int n;
    cin >> n;
    int a[n], i, j=0;

    for(i=0; i<n; i++) {
        cin >> a[i];
        if(IsPrime(a[i])) j++;
    }
    cout << j << endl;

    return 0;
}