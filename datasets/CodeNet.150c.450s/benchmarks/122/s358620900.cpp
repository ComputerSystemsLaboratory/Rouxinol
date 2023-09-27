#include <iostream>

using namespace std;

typedef long long signed int ll;

constexpr ll NIL = -20000000000;

ll a[20000000] ={NIL};
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

void ins(int v) {
    a[h] = v;
    int d = h;
    h++;
    while(pk(d) < a[d]){
        swap(a[d/2],a[d]);
        d = d / 2;
    }
}

ll ext() {
    ll res = a[1];
    h--;
    a[1] = a[h];
    a[h] = NIL;
    heaplify(1);
    return res;
}

int main() {
    h = 1;
    a[0] = -NIL;
    string s;
    int t;
    while(!cin.eof()) {
        cin >> s;
        if(s == "extract") cout << ext() << endl;
        else {
            cin >> t;
            ins(t);
        }
    }
    return 0;
}
