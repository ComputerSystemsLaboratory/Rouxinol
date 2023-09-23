#include <iostream>
using namespace std;

int n, s;
int num[10];
int dfs(int sum, int i, int j) {
    if(sum == s && j == 0) return 1;
    if(i > 9 || j<= 0) return 0;
    return dfs(sum+num[i], i+1, j-1) + dfs(sum, i+1, j);
}


int main() {
    for(int i=0;i<10;i++) num[i] = i;
    while(true) {
        cin >> n >> s;
        if(!n && !s) break;
        int ans = dfs(0, 0, n);
        cout << ans << endl;
    }
}