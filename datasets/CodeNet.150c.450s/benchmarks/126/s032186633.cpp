#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
 
int A, B, N;
map<P, int> mp;
vector<vector<ll>> dp(20, vector<ll>(20, -1));

ll rec(int y = 0, int x = 0){
    
    auto itr = mp.find(make_pair(x, y));
    if(itr != mp.end()) return 0;
    if(y >= B || x >= A) return 0;
    if(y == B - 1 && x == A - 1) return 1;
    
    ll res = 0;
    res += rec(y + 1, x);
    res += rec(y, x + 1);
    
    return res;
}

int main(void){
    
    do{
        scanf("%d %d", &A, &B);
        if(A == 0 && B == 0) continue;
        scanf("%d", &N);
        for(int i = 0; i < N; ++i){
            int a, b; scanf("%d %d", &a, &b);
            --a, --b;
            mp[make_pair(a, b)] = 1;
        }
        cout << rec() << endl;
        mp.clear();
        for(int i = 0; i < B; ++i) for(int j = 0; j < A; ++j) dp[i][j] = -1;
    }while(A != 0 && B != 0);
    
    return 0;
}
