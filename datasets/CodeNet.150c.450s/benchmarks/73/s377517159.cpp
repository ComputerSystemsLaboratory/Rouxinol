#include<iostream>
using namespace std;

int* d;
int n=1;

void initRSQ(int n) {
    for(int i=0; i<2*n-1; i++) d[i] = 0;
}

void add(int k, int a) {
    k += n-1;
    d[k] = d[k]+a;
    while(k > 0) {
        k = (k-1)/2;
        d[k] = d[k*2+1]+d[k*2+2];
    }
}

int query(int a, int b, int k, int l, int r) {
    if(r <= a || b <= l) return 0;
    if(a <= l && r <= b) return d[k];

    return query(a,b,k*2+1,l,(l+r)/2)+query(a,b,k*2+2,(l+r)/2,r);
}

int findSum(int a, int b) {
    return query(a, b, 0, 0, n);
}

int main() {
    int q, com, x, y, n_;
    cin >> n_ >> q;
    while(n < n_) n *= 2;
    d = new int[2*n-1];
    initRSQ(n);

    for(int i=0; i<q; i++) {
        cin >> com >> x >> y;
        if(com) cout << findSum(x-1,y) << endl;
        else add(x-1,y);
    }

    delete[] d;
    return 0;
}

