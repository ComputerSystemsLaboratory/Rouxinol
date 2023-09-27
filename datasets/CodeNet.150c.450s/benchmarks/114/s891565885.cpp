#include <algorithm>
#include <iostream>
#include <vector>
#include <math.h>
#include <set>
#include <map>
#include <string>
#include <stack>
#include <queue>
#include <iomanip>
#include <numeric>
#include <tuple>
#define _USE_MATH_DEFINES
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef tuple<int, int, int> tiii;
double pi = 3.141592653589793;
ll mod = 1000000007;
int intmax = 2147483647;
int intmin = -2147483648;
ll llmax = 9223372036854775807;
ll llmin = -9223372036854775807;

struct unionFind {
    vector<int> data;
    unionFind(int size) : data(size, -1) {}
    
    bool unite(int x, int y) {
        x = root(x);
        y = root(y);
        if (x != y) {
            if(data[y] < data[x]) {
                swap(x, y);
            }
            data[x] += data[y];
            data[y] = x;
        }
        return x != y;
    }

    bool same(int x, int y) {
        return root(x) == root(y);
    }

    int root(int x) {
        return (data[x] < 0) ? x : data[x] = root(data[x]);
    }

    int rank(int x) {
        return -data[root(x)];
    }
};

//cost,from,toの順
vector<tiii> T;
vector<tiii> Krusans;

ll Kruskal(int n) {
    sort(T.begin(), T.end());
    ll ans = 0;
    ll num = 0;
    unionFind u(n);
    int size = T.size();
    for (int i = 0; i < size; i++) {
        int cost = get<0>(T[i]);
        int from = get<1>(T[i]);
        int to = get<2>(T[i]);
        if (u.root(from) != u.root(to)) {
            u.unite(from, to);
            ans += cost;
            num++;
            tiii t = make_tuple(cost, from, to);
            Krusans.push_back(t);
        }
        if (num == n - 1) {
            break;
        }
    }
    return ans;
}

int mat[200][200];

int main() {
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> mat[i][j];
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            if (mat[i][j] != -1) {
                tiii e = make_tuple(mat[i][j], i, j);
                T.push_back(e);
            }
        }
    }
    ll ans = Kruskal(N);
    cout << ans << endl;
}

