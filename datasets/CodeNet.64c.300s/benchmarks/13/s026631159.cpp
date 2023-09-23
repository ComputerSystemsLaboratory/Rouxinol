#include <iostream>
using ll = long long;
using namespace std;
#define MAX 50
/* initialize */
int fibs[MAX];

/* main */
int main() {

    int n;
    cin >> n;
    fibs[0]=fibs[1] = 1;
    for (int i = 2; i <= n; i++) {
        fibs[i] = fibs[i-1] + fibs[i-2];
    }
    cout << fibs[n] << "\n";
    return 0;
}
