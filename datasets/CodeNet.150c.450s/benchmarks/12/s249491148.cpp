#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
#define roop(i, a, n) for(int i = (a); i < (n); i++)
using namespace std;
using ll = long long;

int main(){
    int h; cin >> h;
    const int size = h+1;
    ll a[size]; roop(i, 1, size) cin >> a[i];

    roop(i, 1, size){
        printf("node %d: key = %ld, ", i, a[i]);
        if(i-1) printf("parent key = %ld, ", a[i/2]);
        int l = 2*i, r = 2*i + 1;
        if(l < size) printf("left key = %ld, ", a[l]);
        if(r < size) printf("right key = %ld, ", a[r]);
        printf("\n");
    }

    return 0;
}
