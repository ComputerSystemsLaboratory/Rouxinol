#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

ll h;
ll a[1001000];

void max_heapify(ll i){
    ll l = 2*i, r = 2*i + 1, largest;

    if(l <= h && a[l] > a[i]) largest = l;
    else largest = i;
    if(r <= h && a[r] > a[largest]) largest = r;

    if(largest != i){
        swap(a[i], a[largest]);
        max_heapify(largest);
    }

    return;
}

void build_max_heap(){
    for(ll i = h/2; i >= 1; i--) max_heapify(i);
    return;
}

int main(){
    cin >> h;
    for(ll i = 1; i <= h; i++) cin >> a[i];

    build_max_heap();

    for(ll i = 1; i <= h; i++) cout << ' ' << a[i];
    cout << endl;

    return 0;
}
