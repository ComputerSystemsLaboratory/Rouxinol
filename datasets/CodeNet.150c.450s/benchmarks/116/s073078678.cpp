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
#define mp std::make_pair

typedef long long ll;
typedef unsigned long long ull;
typedef std::pair<int,int> P;
typedef std::pair<int,P> State;

const ll INF = 1 << 30;
// S N E W(南北東西)
const int dx[8] = {0, 0, 1, -1, 1, 1, -1, -1}, dy[8] = {1, -1, 0, 0, 1, -1, 1, -1};

class BIT{
public:    
    BIT(){}
    BIT(int n){
        init(n);
    }
    void init(int n){
        size = n;
        FOR(i, 1, size+1){
            data[i] = 0;
        }
    }
    void add(int k, int v){
        while(k <= size){
            data[k] += v;
            k += k & -k;
        }
    }
    ll sum(int k){
        int sum = 0;
        while(k > 0){
            sum += data[k];
            k -= k & -k;
        }
        return sum;
    }
private:
    static const int MAX_N = 100001;
    ll data[MAX_N];
    int size;
};

int N, K;
BIT bit;

int main(){
    while(std::cin >> N >> K, N){
        bit.init(N);

        FOR(i, 1, N+1){
            int n;
            std::cin >> n;

            bit.add(i, n);
        }

        ll res = -INF;
        FOR(i, 1, N+1){
            if(i+K-1 <= N){
                res = std::max(res, bit.sum(i+K-1) - bit.sum(i-1));
            }
        }

        std::cout << res << std::endl;
    }
}