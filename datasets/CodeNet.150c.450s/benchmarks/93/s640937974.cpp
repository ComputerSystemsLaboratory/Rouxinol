#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stack>
#include <queue>
#include <numeric>
#include <iomanip>
#include <map>
#include <set>
#include <deque>
#include <utility>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < n; i++)
#define repk(i, k, n) for (int i = k; i < n; i++)
#define all(vec) vec.begin(), vec.end()
#define MOD 1e9 + 7
#define INF 1e9
#define SENTINEL 2e9
#define PIE 3.1415926535

template <class T>
inline bool chmin(T &a, T b){if (a > b){a = b;return true;}return false;}
template <class T>
inline bool chmax(T &a, T b){if (a < b){a = b;return true;}return false;}
template <class T>
inline T GCD(T a, T b){if (b == 0) return a; else return GCD(b, a % b);}
template <class T>
inline T LCM(T a, T b) {return (a * b) / GCD(a, b);}

int pa(vector<pair<char, int>> &a, int p, int r) {
    int x = a[r].second;
    int i = p - 1;
    for (int j = p; j < r; j++) {
        if (a[j].second <= x) {
            i++;
            swap(a[j], a[i]);
        }
    }
    swap(a[i + 1], a[r]);
    return i + 1;
}

void quick_sort(vector<pair<char, int>> &a, int p, int r){
    if (p < r) {
        int q = pa(a, p, r);
        quick_sort(a, p, q - 1);
        quick_sort(a, q + 1, r);
    }
}

void merge(vector<pair<char, int>> &a, int left, int mid, int right){
    int n1 = mid - left;
    int n2 = right - mid;
    pair<char, int> l[n1 + 1];
    pair<char, int> r[n2 + 1];
    rep(i, n1) l[i] = a[left + i];
    rep(i, n2) r[i] = a[i + mid];
    l[n1] = make_pair('s', SENTINEL);
    r[n2] = make_pair('s', SENTINEL);
    int i = 0, j = 0;
    for (int k = left; k < right; k++){
        if (l[i].second <= r[j].second){
            a[k] = l[i];
            i++;
        }
        else{
            a[k] = r[j];
            j++;
        }
    }
}

void merge_sort(vector<pair<char, int>> &a, int left, int right){
    if (left + 1 < right){
        int mid = (left + right) / 2;
        merge_sort(a, left, mid);
        merge_sort(a, mid, right);
        merge(a, left, mid, right);
    }
}

int main(){
    int n;
    cin >> n;
    char c;
    int i;
    vector<pair<char, int>> v(n);
    vector<pair<char, int>> w(n);
    rep(j, n) {
        cin >> c >> i;
        v[j] = make_pair(c, i);
        w[j] = make_pair(c, i);
    }
    quick_sort(v, 0, n - 1);
    merge_sort(w, 0, n);
    if (v == w)
        cout << "Stable" << endl;
    else
        cout << "Not stable" << endl;
    rep(i, n) {
        cout << v[i].first << ' ' << v[i].second << endl;
    }
}
