#include <bits/stdc++.h>
using namespace std;


int dfs(int c,int s){
    if( c == 0 ) return s == 0;
    int ans = 0;
    for(int i = 0 ; i < 10 ; i++){
        ans += dfs(c-1, s-i);
    }
    return ans;
}

int main() {
    int n;
    while(cin >> n) cout << dfs(4, n) << endl;
}
