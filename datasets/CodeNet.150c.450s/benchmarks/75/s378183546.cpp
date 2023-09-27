#include<bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i) 
#define PI acos(-1)

using namespace std;
using ll = long long;
using P = pair<int, int>;

void maxHeapify(vector<int>& as, int h, int H) {
    int l = 2 * h + 1;
    if (l >= H) l = h;
    int r = 2 * h + 2;
    if (r >= H) r = h;
    int i = h;
    if (as[l] > as[i]) {
        i = l;
    }
    if (as[r] > as[i]) {
        i = r;
    }

    if (i != h) {
        swap(as[i], as[h]);
        maxHeapify(as, i, H);
    }
}

void buildMaxHeap(vector<int>& as, int H) {
    for (int i = H / 2; i >= 0; --i) {
        maxHeapify(as, i, H);
    }
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int H;
    cin>>H;
    vector<int> as(H);
    rep(i, H) cin>>as[i];

    buildMaxHeap(as, H);
    rep(i, H) cout<<" "<<as[i];
    cout<<endl;
}
