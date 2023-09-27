#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double long
#define rep(i, m, n) for(ll i = (ll)(m); i < (ll)(n); ++i)
#define rrep(i, m, n) for(ll i = (ll)(m); i < (ll)(n); --i)
const ll MOD = 1000000007;
const double pi = 3.14159265358979323846;

const int INF = 2000000000;

void marge(int a[], int left, int mid, int right, ll *count){
    int n1 = mid - left;
    int n2 = right - mid;
    vector<int> l,r;
    rep(i, 0, n1) l.push_back(a[left+i]);
    rep(i, 0, n2) r.push_back(a[mid+i]);
    l.push_back(INF);
    r.push_back(INF);
    int i = 0, j = 0;
    rep(k, left, right){
        if(l[i] <= r[j]) a[k] = l[i++];
        else {
            a[k] = r[j++];
            *count += (n1-i);
        }
    }
    return;
}

void margesort(int a[], int left, int right, ll *count){
    if(left + 1 < right){
        int mid = (left + right) / 2;
        margesort(a, left, mid, count);
        margesort(a, mid, right, count);
        marge(a, left, mid, right, count);
    }
    return;
}

int main(void){
    int n, s[200000];
    ll count = 0;
    cin >> n;
    rep(i, 0, n) cin >> s[i];
    margesort(s, 0, n, &count);
    cout << count << endl;
    return 0;
}
