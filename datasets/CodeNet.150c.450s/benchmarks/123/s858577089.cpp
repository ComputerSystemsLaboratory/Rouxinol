#include <iostream>
#include <vector>
#include <cmath>
#include <cstdio>

using namespace std;

bool isPrime(int x) {
    if (x == 2)
        return true;

    for (int i = 2; i <=sqrt(x); i++) {
        if (x % i == 0) {
            return false;
        }
    }
    return true;

}

int main() {

   // freopen("../files/in.txt", "r", stdin);
    int n, sum = 0, t;
    cin >> n;
    while (n > 0) {

        cin >> t;

        if(isPrime(t)){
            //cout<<t<<" "<<endl;
            sum++;
        }
        n--;

    }
    cout << sum << endl;

    return 0;
}