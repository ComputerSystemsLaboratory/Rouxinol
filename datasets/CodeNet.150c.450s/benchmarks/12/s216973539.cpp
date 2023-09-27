#include <iostream>

using namespace std;

typedef long long signed int ll;

ll a[510];
int h;

void rk(int n) {
    if(a[n*2+1]) cout << "right key = " << a[n*2+1] << ", ";
}
void lk(int n) {
    if(a[n*2]) cout << "left key = " << a[n*2] << ", ";
}
void pk(int n) {
    if(a[n/2]) cout << "parent key = " << a[n/2] << ", ";
}

void print(int n){
    cout << "node " << n << ": key = " << a[n] << ", ";
    pk(n);lk(n);rk(n);
    cout << endl;
}

int main() {
    cin >> h;
    for (int i = 1; i <= h; i++) cin >> a[i];
    for (int i = 1; i <= h; i++) print(i);
    return 0;
}
