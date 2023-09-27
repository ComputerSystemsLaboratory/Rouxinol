#include<iostream>
using namespace std;

int main() {
    int n, tmp;
    cin >> n;
    cout << (tmp = n) << ":";
    for(int i = 2; i * i < n; ++i) {
        while(!(tmp % i)) {
            tmp /= i;
            cout << " " << i;
        }
    }
    if(tmp != 1) cout << " " << tmp;
    cout << endl;
}