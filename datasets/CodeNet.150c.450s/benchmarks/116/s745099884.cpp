#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <map>
#include <stack>
#include <queue>
#include <algorithm>
#include <set>

#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,j) FOR(i,0,j)

const int INF = 1 << 24;

typedef unsigned long long ull;

const int MAX_N = 1 << 18;

class SegmentTree{
public:
    SegmentTree(int n){
        size = 1;
        while(size < n){
            size *= 2;
        }

        REP(i, 2*n-1){
            data[i] = 0;
        }
    }

    void push(int k, int v){
        k += size - 1;
        data[k] = v;

        while(k > 0){
            int parent = (k - 1) / 2,
                c1 = parent * 2 + 1, c2 = parent * 2 + 2;

            data[parent] = data[c1] + data[c2];
            k = parent;
        }
    }

    int query(int l, int r){
        return _query(l, r, 0, 0, size);
    }

    int _query(int l, int r, int k, int a, int b){
        if(r <= a || b <= l){return 0;}

        if(l <= a && b <= r){return data[k];}
        
        int mid = (a + b) / 2;
        return _query(l, r, 2*k+1, a, mid) + _query(l, r, 2*k+2, mid, b);
    }

private:
    int data[MAX_N], size;
};

int main(){
    int N, K;
    while(std::cin >> N >> K, N){
        SegmentTree st(N);

        REP(i, N){
            int n;
            std::cin >> n;

            st.push(i, n);
        }

        int res = 0;
        REP(i, N){
            if(i + K <= N){
                res = std::max(res, st.query(i, i+K));
            }
        }

        std::cout << res << std::endl;
    }
}