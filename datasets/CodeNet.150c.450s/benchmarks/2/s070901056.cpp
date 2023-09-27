#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
#include<cmath>

using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
template <class T>
bool chmax(T &a, const T &b) { return (a < b) ? (a = b, 1) : 0; }
template <class T>
bool chmin(T &a, const T &b) { return (b < a) ? (a = b, 1) : 0; }

#define MAX 100005
 
typedef long long ll;
typedef pair<int, int> P;

int partition(vector<int> &a, int p, int r)
{
    int x = a[r];
    int i = p - 1;
    for (int j = p; j < r; j++) {
        if (a[j] <= x) {
            i++;
            swap(a[i], a[j]);
        }
    }
    swap(a[r], a[i+1]);
    return i+1;
}

int main(int, char**)
{
    int n;
    cin >> n;

    vector<int> a(n);
    rep(i,n) cin >> a[i];

    int par = partition(a, 0, n-1);
    rep(i,n) {
        if (i > 0) cout << " ";
        if (i == par) cout << "[" << a[i] << "]";
        else cout << a[i]; 
    }
    cout << endl;

    return 0;
}
