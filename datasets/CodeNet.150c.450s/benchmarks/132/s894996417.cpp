#include <iostream>
#include <vector>

using namespace std;

int solve(int n, int p){
    vector<int> m(n, 0);
    int i = 0, x = p;
    for(; m[i]!=p; i==n-1? i=0: ++i){
        if(x)m[i]++, x--; else x = m[i], m[i] = 0;
    }
    return i;
}

int main(){
    int n, p;
    while(cin >> n >> p, n|p)cout << solve(n, p) << '\n';
    return 0;
}