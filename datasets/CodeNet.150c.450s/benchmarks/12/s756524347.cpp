#include <bits/stdc++.h>
#include <cmath>

using namespace std;
typedef long long ll;
//typedef unsigned long long ll;

//#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep(i, n) for (ll i = 0; i < (n); ++i)
//#define sz(x) ll(x.size())
//typedef pair<ll, int> P;
//typedef pair<ll, ll> P;
//const double INF = 1e10;
//const ll INF = LONG_LONG_MAX / 10;
//const ll INF = 1e15;
const ll MINF = LONG_LONG_MIN;
const int INF = INT_MAX / 10;
#define cmin(x, y) x = min(x, y)
#define cmax(x, y) x = max(x, y)

bool contain(set<char> &s, int a) { return s.find(a) != s.end(); }

//ifstream myfile("C:\\Users\\riku\\Downloads\\0_00.txt");
//ofstream outfile("log.txt");
//outfile << setw(6) << setfill('0') << prefecture << setw(6) << setfill('0') << rank << endl;
// std::cout << std::bitset<8>(9);

typedef pair<int, int> P;

void print_line(vector<int> &line) {
    if (line.size() == 0ll) {
        cout << endl;
        return;
    }
    for (ll i = 0; i < line.size(); i++) {
        cout << line[i];
        if (i == line.size() - 1) cout << endl;
        else cout << ' ';
    }
}


typedef priority_queue<long long, vector<long long>, greater<long long> > PQ_ASK;
const int mod = 1000000007;

class Heap {
    int n;
    vector<ll> heap;
public:
    Heap(int n) : n(n), heap(n + 1, 0) {}

    void set(int i, ll v) {
        heap[i + 1] = v;
    }

    ll get(int i) {
        return heap[i + 1];
    }

    ll parent_value(int i) {
        if (i == 0) return -INF;
        int j = (i + 1) / 2;
        return heap[j];
    }

    ll left_value(int i) {
        int j = 2 * (i + 1);
        if (j > n)return -INF;
        return heap[j];
    }

    ll right_value(int i) {
        int j = 2 * (i + 1) + 1;
        if (j > n) return -INF;
        return heap[j];
    }


};

int main() {

    int n;
    cin >> n;

    Heap heap(n);

    rep(i, n) {
        ll v;
        cin >> v;
        heap.set(i, v);
    }

    rep(i, n) {
        printf("node %d: key = %lld, ", (int) i + 1, heap.get(i));
        ll parent = heap.parent_value(i);
        ll left = heap.left_value(i);
        ll right = heap.right_value(i);
        if (parent != -INF) {
            printf("parent key = %lld, ", parent);
        }
        if (left != -INF) {
            printf("left key = %lld, ", left);
        }
        if (right != -INF) {
            printf("right key = %lld, ", right);
        }
        cout << endl;
    }

}


