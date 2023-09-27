#include <iostream>
#include <vector>
using namespace std;

int size;
vector <int> seg;

void add(int i, int x){
    i += size - 1;
    seg[i] += x;
    while(i > 0){
        i = (i - 1) / 2;
        seg[i] = seg[i * 2 + 1] + seg[i * 2 + 2];
    }
}

void init(int n){
    size = 1;
    while(size <= n) size *= 2;
    seg = vector <int> (2 * size + 1, 0);
}

int sum(int a, int b, int v, int l, int r){
    if(r <= a || b <= l) return 0;
    if(a <= l && r <= b) return seg[v];
    return sum(a, b, v * 2 + 1, l, (l + r)  / 2) + sum(a, b, v * 2 + 2, (l + r) / 2, r);
}

int main(){
    
    int n, q;
    cin >> n >> q;
    init(n);
    while(q--){
        int c, a, b; cin >> c >> a >> b;
        if(!c) add(a, b);
        else cout << sum(a, b + 1, 0, 0, size) << endl;
    }
}