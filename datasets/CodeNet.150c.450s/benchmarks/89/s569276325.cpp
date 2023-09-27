#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(int)(b);++i)
#define rep(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(),(x).end()

vector<int> primes;

bool is_prime(int n) {
    if(n < 2) return false;
    else if(n == 2) return true;

    if(n % 2 == 0) return 0;
    for(int i=3; i*i<=n; i+=2) if(n % i == 0) return false;
    return true;
}

void solve(int a,int d,int n) {
    int cnt = 0;
    for(int k=0; ; k++) {
        int t = a + k*d;
        if(binary_search(ALL(primes), t)) ++cnt;
        if(cnt == n) {
            printf("%d\n", t);
            return ;
        }
    }
    return ;
}

int main() {
    FOR(i,1,1e6+1) if(is_prime(i)) primes.push_back(i);
    for(int a,d,n; scanf("%d%d%d",&a,&d,&n) && a; ) solve(a,d,n);
    return 0;
}