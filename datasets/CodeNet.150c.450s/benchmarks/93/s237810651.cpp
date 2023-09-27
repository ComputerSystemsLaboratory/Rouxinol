#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double long
#define rep(i, m, n) for(ll i = (ll)(m); i < (ll)(n); ++i)
#define rrep(i, m, n) for(ll i = (ll)(m); i > (ll)(n); --i)
const ll MOD = 1000000007;
const double pi = 3.14159265358979323846;

const int INF = 2000000000;

void marge(pair<char, int> a[], int left, int mid, int right){
    int n1 = mid - left;
    int n2 = right - mid;
    vector<pair<char, int>> l,r;
    rep(i, 0, n1) l.push_back(a[left+i]);
    rep(i, 0, n2) r.push_back(a[mid+i]);
    l.push_back(make_pair('S', INF));
    r.push_back(make_pair('S', INF));
    int i = 0, j = 0;
    rep(k, left, right){
        if(l[i].second <= r[j].second) a[k] = l[i++];
        else a[k] = r[j++];
    }
    return;
}

void margesort(pair<char, int> a[], int left, int right){
    if(left + 1 < right){
        int mid = (left + right) / 2;
        margesort(a, left, mid);
        margesort(a, mid, right);
        marge(a, left, mid, right);
    }
    return;
}

int Partition(pair<char, int> *a, int p, int r){
    pair<char, int> x = a[r];
    int i = p - 1;
    rep(j, p, r){
        if(a[j].second <= x.second){
            i = i+1;
            swap(a[i], a[j]);
        }
    }
    swap(a[i+1], a[r]);
    return i+1;
}

void quicksort(pair<char, int> *a, int p, int r){
    if(p < r){
        int q = Partition(a, p, r);
        quicksort(a, p, q-1);
        quicksort(a, q+1, r);
    }
}

int main(void){
    int n;
    pair<char, int> a[100000], b[100000];
    bool isstable = true;
    cin >> n;
    rep(i, 0, n) {
        cin >> a[i].first >> a[i].second;
        b[i] = a[i];
    }
    quicksort(a, 0, n-1);
    margesort(b, 0, n);
    
    rep(i, 0, n){
        if(a[i] != b[i]){
            isstable = false;
            break;
        }
    }
    cout << (isstable? "Stable":"Not stable") << endl;
    rep(i, 0, n){
        cout << a[i].first << ' ' << a[i].second << endl;
    }
    return 0;
}
