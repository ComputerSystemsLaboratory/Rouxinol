#include <iostream>
#include <cstdio>
#include <vector>
#include <list>
#include <algorithm>
#include <cmath>
#include <stack>
#include <set>
using namespace std;

#define REP(i,n) for(int (i)=0; (i)<(n); (i)++)
#define FOR(i,a,b) for(int (i)=(a); (i)<(b); (i)++)
#define PUSH(n,v) for(int i=0; i<(n); i++) {int j; cin >> j; v.push_back(j);}
#define ALL(v) v.begin(), v.end()

typedef pair<int, char> P;

void exchange(vector<P> &v, int a, int b) {
    P temp = v[a];
    v[a] = v[b];
    v[b] = temp;
}

int partition(vector<P> &v, int p, int r) {
    int x = v[r].first;
    int i = p-1;
    for (int j = p; j < r; j++) {
        if (v[j].first <= x) {
            i++;
            exchange(v, i, j);
        }
    }
    exchange(v, i+1, r);
    return i+1;
}

bool stable(vector<P> v, vector<P> w) {
    REP(i,v.size()) {
        if (v[i].second != w[i].second) return false;
    }
    return true;
}

void quicksort(vector<P> &v, int p, int r) {
    if (p < r) {
        int q = partition(v, p, r);
        quicksort(v, p, q-1);
        quicksort(v, q+1, r);
    }
}

void merge3(vector<P> &arr, int left, int mid, int right) {
    int leftlen = mid - left;
    int rightlen = right - mid;
    vector<P> L, R;
    REP(i,leftlen) L.push_back(arr[left+i]);
    REP(i,rightlen) R.push_back(arr[mid+i]);
    L.push_back(make_pair(2e9, 'A'));
    R.push_back(make_pair(2e9, 'A'));
    int i = 0, j = 0;
    FOR(k, left, right) {
        if (L[i].first <= R[j].first) {
            arr[k] = L[i];
            i++;
        }else {
            arr[k] = R[j];
            j++;
        }
    }
}

void mergesort3(vector<P> &arr, int left, int right) {
    if (left+1 < right) {
        int mid = (left + right) / 2;
        mergesort3(arr, left, mid);
        mergesort3(arr, mid, right);
        merge3(arr, left, mid, right);
    }
}

int main() {
    int n;
    cin >> n;
    vector<P> v;
    REP(i,n) {
        char s;
        int j;
        cin >> s >> j;
        v.push_back(make_pair(j, s));
    }
    vector<P> w(v);
    mergesort3(w, 0, n);
    quicksort(v, 0, n-1);
    
    if (stable(v, w)) {
        cout << "Stable" << endl;
    }else {
        cout << "Not stable" << endl;
    }
    
    for(P p: v) {
        cout << p.second << " " << p.first << endl;
    }
    
    return 0;
}