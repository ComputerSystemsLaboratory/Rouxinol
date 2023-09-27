#include<iostream>
#include<cmath>
using namespace std;
#define N 31623 //√10^9
int main() {
    int n;
    cin >> n;
    int x = n; //n /= i
    cout << n << ":";
    for (int i = 2; i * i <= x; i++) {
        while (n % i == 0) {
            cout << " " << i;
            n /= i;
        }
    }
    if (n != 1) { //999993031 : 999993031
        cout << " " << n;
    }
    cout << endl;
    return 0;
}

