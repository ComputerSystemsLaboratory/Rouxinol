#include <iostream>

using namespace std;

typedef long long signed int ll;

constexpr ll NIL = -20000000000;

ll a[500010];
int h;

ll rk(int n) {
    if(n*2+1 <= h) return a[n*2+1];
    return NIL;
}
ll lk(int n) {
    if(n*2 <= h) return a[n*2];
    return NIL;
}
ll pk(int n) {
    if(n/2 <= h) return a[n/2];
    return NIL;
}

void print(int n){
    cout << "node " << n << ": key = " << a[n] << ", ";
    pk(n);lk(n);rk(n);
    cout << endl;
}

void heaplify(int n) {
    int l = n;
    if(a[l] < rk(n)) l = n*2+1;
    if(a[l] < lk(n)) l = n*2;
    if(l != n){
        swap(a[l],a[n]);
        heaplify(l);
    }
}

int main() {
    cin >> h;
    for (int i = 1; i <= h; i++) cin >> a[i];
    for(int i = h;i > 0;i--) heaplify(i);
    for(int i = 1;i <= h; i++)cout << " " << a[i];
    cout << endl;
    return 0;
}
