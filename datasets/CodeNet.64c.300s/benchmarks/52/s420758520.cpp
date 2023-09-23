#include <iostream>
using namespace std;

int n, s;

int dfs( int a, int m, int c ){
    if(a == s && c == n) return 1;
    if(a > s || c > n) return 0;
    if(m > 9) return 0;
    int t = 0;
    for(int i = m; a+i <= s && i < 10; i++){
        t += dfs(a+i, i+1, c+1);
    }
    return t;
}

int main(){
    while( true ){
        cin >> n >> s;
        if( n == 0 && s == 0 ) break;
        cout << dfs(0, 0, 0) << endl;
    }
    return 0;
}