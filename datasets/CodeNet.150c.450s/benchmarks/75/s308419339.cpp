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
#define MOD 1e9 + 7
#define INF 1e9
#define SENTINEL 2e9
#define PIE 3.14159265358979323

template <class T>
inline bool chmin(T &a, T b) {if (a > b) {a = b; return true;} return false;}
template <class T>
inline bool chmax(T &a, T b) {if (a < b) {a = b; return true;} return false;}
template <class T>
T GCD(T a, T b) {if (b == 0) return a; else return GCD(b, a % b);}
template <class T>
inline T LCM(T a, T b) { return (a * b) / GCD(a, b);}

void maxheapify(vector<int> &v, int i, int h){
    int left = i * 2;
    int right = left + 1;
    int largest;
    if (left <= h + 1 && v[left] > v[i])
        largest = left;
    else
        largest = i;
    if (right <= h + 1 && v[right] > v[largest])
        largest = right;
    if (largest != i){
        swap(v[i], v[largest]);
        maxheapify(v, largest, h);
    }
}

void buildheap(vector<int> &v, int h){
    for (int i = (h + 1) / 2; i != 0; i--){
        maxheapify(v, i, h);
    }
}

int main(){
    int h;
    cin >> h;
    vector<int> v(h + 1, 0);
    v[0] = 0;
    for (int i = 0; i < h; i++)
        cin >> v[i + 1];
    buildheap(v, h);
    for (int i = 0; i < h; i++)
        cout << ' ' << v[i + 1];
    cout << endl;
    return 0;
}
