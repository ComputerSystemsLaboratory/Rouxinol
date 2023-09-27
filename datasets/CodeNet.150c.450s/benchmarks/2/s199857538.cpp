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
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < n; i++)
#define repk(i, k, n) for (int i = k; i < n; i++)
#define all(vec) vec.begin(), vec.end()
#define debug(x) cout << "debug: " << x << endl
#define MOD 1e9 + 7
#define INF 1e9

template <class T>
inline bool chmin(T &a, T b){if (a > b){a = b;return true;}return false;}
template <class T>
inline bool chmax(T &a, T b){if (a < b){a = b;return true;}return false;}
template <class T>
inline T GCD(T a, T b){if (b == 0) return a; else return GCD(b, a % b);}
template <class T>
inline T LCM(T a, T b) {return (a * b) / GCD(a, b);}

//const double pi = 3.1415926535; //10^-10までの円周率

int p(int a[], int p, int r) {
    int x = a[r];
    int i = p - 1;
    for (int j = p; j < r; j++) {
        if (a[j] <= x) {
            i++;
            swap(a[j], a[i]);
        }
    }
    swap(a[i + 1], a[r]);
    return i + 1;
}

int main(){
    int n;
    cin >> n;
    int a[n];
    rep(i, n) cin >> a[i];
    int k = p(a, 0, n - 1);
    rep(i,n) {
        if (i == k)
            cout << '[' << a[i] << ']' << ' ';
        else if (i == n - 1)
            cout << a[i] << endl;
        else
            cout << a[i] << ' ';
    }
}
