#include <iostream>

using namespace std;

int main(){
    int n, k, u, v, i, j;
    cin >> n;
    int m[n+1][n+1];
    for(i = 1; i <= n; i++){
        for(j = 1; j <= n; j++) m[i][j] = 0;
    }
    for(i = 1; i <= n; i++){
        cin >> u >> k;
        for(j = 1; j <= k; j++){
            cin >> v;
            m[u][v] = 1;
        }
    }
    for(i = 1; i <= n; i++){
        for(j = 1; j <= n; j++){
            if(j == n) cout << m[i][j] << endl;
            else cout << m[i][j] << " ";
        }
    }
    return 0;
}
