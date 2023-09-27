#include <vector>
#include <iostream>
#include <set>
#include <cstdio>
#include <queue>
#include <cstdio>
#include <cstdlib>
#include <cassert>
#include <ctime>
#include <cmath>
#include <complex>
#include <algorithm>
#include <tuple>
#include <algorithm>
#include <limits>
#include <map>
#include <valarray>
#include <list>

using namespace std;

typedef long long ll;

template<class T>
struct Pi {
    T x, y;
    Pi() {}
    Pi(T xx, T yy) {
        x = xx; y = yy;
    }
    bool operator<(const Pi &r) const {
        if (x != r.x) return x < r.x;
        return y < r.y;
    }
    bool operator>(const Pi &r) const {
        if (x != r.x) return x > r.x;
        return y > r.y;
    }
    bool operator==(const Pi &r) const {
        if (x != r.x) return false;
        return y == r.y;
    }
};

template<class T>
struct Ti {
    T x, y, z;
    Ti() {}
    Ti(T xx, T yy, T zz) {
        x = xx; y = yy; z = zz;
    }
    bool operator<(const Ti &r) const {
        if (x != r.x) return x < r.x;
        if (y != r.y) return y < r.y;
        return z < r.z;
    }
    bool operator>(const Ti &r) const {
        if (x != r.x) return x > r.x;
        if (y != r.y) return y > r.y;
        return z > r.z;
    }
    bool operator==(const Ti &r) const {
        if (x != r.x) return false;
        if (y != r.y) return false;
        return z == r.z;
    }
};

const int MN = 1000010;
bool isP[MN];
int main() {
    for (int i = 2; i < MN; i++) {
        bool f = true;
        for (int j = 2; j*j <= i; j++) {
            if (!(i%j)) {
                f = false;
                break;
            }
        }
        isP[i] = f;
    }
    int n;
    while (cin>>n) {
        int res = 0;
        for (int i = 0; i <= n; i++) {
            if (isP[i]) res++;
        }
        printf("%d\n", res);
    }
    return 0;
}