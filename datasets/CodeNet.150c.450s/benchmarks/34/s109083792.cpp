#include <iostream>

#define MAX_N 32
#define INF -1

int ans, n;
long memo[MAX_N];

inline
void solve();

long dp(int a);

inline
int answer(int in);

int main(){
    while(true){
        std::cin >> n;
        
        if(n == 0)
            break;
        
        for(int i = 0; i < MAX_N; ++i)
            memo[i] = INF;
        
        solve();
        
        std::cout << answer(ans) << std::endl;
    }
    return 0;
}

inline
void solve(){
    ans = dp(n + 1);
    return;
}

long dp(int a){
    if(a < 1) return 0;
    if(a == 1) return 1;
    
    if(memo[a] == INF){
        memo[a] = dp(a - 1) + dp(a - 2) + dp(a - 3);
        return memo[a];
    }
    
    return memo[a];	
}

inline
int answer(int in){
    return in % 3650 > 0 ? in / 3650 + 1 : in / 3650;
}