#include<algorithm>
#include<climits>
#include<cmath>
#include<iomanip>
#include<iostream>
#include<list>
#include<map>
#include<numeric>
#include<queue>
#include<set>
#include<stack>
#include<utility>
#include<vector>

#define lint long long
#define REP(i, x, n) for(int i = x ; i < n ; i++)
#define rep(i, n) REP(i, 0, n)
#define repr(i, n) for(int i = n - 1 ; i >= 0 ; i--)
#define SORT(c) sort((c).begin(), (c).end())
#define SORT_INV(c) sort((c).begin(), (c).end(), greater<int>())
#define IINF INT_MAX
#define LLINF LLONG_MAX

using namespace std;

const lint MOD = 1e9 + 7;

lint power(lint x, lint n){
    lint t = 1;
    while(n > 0){
        if(n & 1){
            t = ((t % MOD) * (x % MOD)) % MOD;
        }
        x = ((x % MOD) * (x % MOD)) % MOD;
        n >>= 1;
    }
    return (t % MOD);
}

int main(){
    lint m, n;
    cin >> m >> n;
    cout << power(m, n) << endl;
    return 0;
}
